#!/bin/bash
wget -P .. https://github.com/4tunemoha/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
