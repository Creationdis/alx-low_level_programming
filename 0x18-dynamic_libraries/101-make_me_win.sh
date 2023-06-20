#!/bin/bash
wget -O /tmp/test.so https://github.com/Creationdis/alx-low_level_programming/raw/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
