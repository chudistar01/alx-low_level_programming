#!/bin/bash
Wget -P /tmp https://github.com/chudistar01/alx-low_level_programming/raw/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
