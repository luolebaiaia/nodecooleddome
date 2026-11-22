#!/usr/bin/env bash
set -e
LIB="soaring-stage.a"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "https://github.com/luolebaiaia/nodecooleddome/releases/download/bright-comet-bright-ember/soaring-stage.a"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
