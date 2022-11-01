#!/bin/bash

set -e
set -o pipefail

CFG=/boot/config-$(uname -r)
echo "Copying config from $CFG"
cp $CFG .config

source ./set_configs.sh

source ./compile_install.sh

echo "Success!"