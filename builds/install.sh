#!/bin/sh

T="$(date +%s)"

env = ${1:-dev}

drush c21si -y
drush env $env -y
drush en c21_rets_connection -y
drush cc all
drush dis c21_rets_connection -y
drush fra --force -y
drush cc all

T="$(($(date +%s)-T))"
echo "The install script took ${T} seconds"
