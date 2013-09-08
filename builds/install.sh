#!/bin/sh

echo "This script was used to do fresh builds during development. Exiting..."
exit

T="$(date +%s)"

E=${1:-dev}

drush c21si -y
drush env $E -y
drush en c21_rets_connection -y
drush cc all
drush dis c21_rets_connection -y
drush fra --force -y
drush cc all

T="$(($(date +%s)-T))"
echo "The install script took ${T} seconds"
