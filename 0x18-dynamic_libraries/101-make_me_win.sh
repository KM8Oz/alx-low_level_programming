#!/bin/bash
# gcc -shared -fPIC -o nrandom.so ./0x18.c

# Step 3: Preload the dynamic library and run the gm program
export LD_PRELOAD=./nrandom.so