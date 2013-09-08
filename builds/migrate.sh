#!/bin/sh

echo "This script was used to do fresh builds during development. Exiting..."
exit

T="$(date +%s)"

C=${1:-5}

drush env migration -y
drush mreg
drush mi c21User
drush mi --group=listing_vocabularies
drush mi c21Agent
drush mi c21Listing --limit="${C} items"

T="$(($(date +%s)-T))"
echo "The migration script took ${T} seconds (${C} listings)"
