#!/bin/bash
# Move to home
cd ~
# Remove old .marvin
rm -Rf .marvin
# Clone the repo
git clone https://www.github.com/SeigneurLefou/Marvin-the-Paranoid-Assistant .marvin
# Move to .marvin
cd .marvin
# Add .local/bin to the PATH
export PATH=$PATH:$HOME/.local/bin/
# Build the binary
make build
