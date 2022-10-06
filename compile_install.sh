#!/bin/bash

set -e
set -o pipefail

make -j$(nproc)
sudo make INSTALL_MOD_STRIP=1 modules_install
sudo make install
sudo make headers_install INSTALL_HDR_PATH=/usr