target extended-remote /dev/bmp_gdb
monitor swdp_scan
attach 1
load
set mem inaccessible-by-default off
b main

