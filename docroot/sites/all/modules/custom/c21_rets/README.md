# Resetting RETS import
There is something quirky about the drealty module and on occasion (usually after feature-reverting the c21_rets module) some of the settings disappear and everything needs to be reset. Here's how:

## Reconfigure the RETS settings

1. Go to ```admin/drealty/drealty_listings``` and edit the mls_residential_listing type. Change its lable to "MLS Residential Listing"
1. Go to ```admin/drealty/connections``` and click "Configure Listings" and check off the "enabled" checkbox for Residential Properties. Lifetime should be set to 8 hours. Click "Save changes". 
2. From that same screen, click the configure link. The "Drealty Property type" select will likely be empty. Set it to "MLS Residential Listing". Click "Save Configuration". There is a good chance you will see an error about the image field. Just click "Save Configuration" again. 
3. Go back to ```admin/drealty/drealty_listings``` and click manage fields. Edit **every** "Autocomplete" field and re-fill in the "RETS Field" value. It is itself an autocomplete field so just start typiing what you think it is and pick. Ex. for City, start typing "City"

## Reimport the RETS listings (and index them)

1. Delete all RETS listings: ```drush rfa```
2. Delete the SOLR index: ```drush solr-delete-index```
3. Rebuild the SOLR index (Should be quick): ```drush solr-index```
4. Import all RETS listings: ```drush ri``` (if this only takes a few seconds it didnt work: go to ```admin/drealty/connections``` and click configure listings. Set the "lifetime" to "every time" and try again)
5. After the import is done (might take a LONG time) keep running ```drush rets-reprocess-images``` until it finishes successfully (without a memory error). This could be 20 - 30 times. 
6. Mark for indexing: ```drush solr-mark-all```
7. Index: ```drush solr-index```
