#!/bin/sh

T="$(date +%s)"

count = ${1:-5}

drush env migration -y
drush mreg
drush mi c21User
drush mi --group=listing_vocabularies
drush mi c21Agent
drush mi c21Listing --limit="${count} items"

T="$(($(date +%s)-T))"
echo "The migration script took ${T} seconds (${count} listings)"
