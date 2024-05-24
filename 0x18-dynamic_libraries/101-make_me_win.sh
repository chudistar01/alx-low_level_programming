#!/bin/bash
Wget -P /tmp/ https://raw.github.com/chudistar01/alx-low_level_programming/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9
