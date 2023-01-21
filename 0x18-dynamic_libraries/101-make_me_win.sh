#!/bin/bash
wget -P /tmp https://github.com/OluwafemiAyansola62alx-low_level_programming/blob/master/0x18-dynamic_libraries/librandwin.so
export LD_PRELOAD=/tmp/libwinner.so
