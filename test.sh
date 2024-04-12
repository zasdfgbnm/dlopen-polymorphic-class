#!/bin/bash

g++ -o main main.cpp
g++ -fPIC -shared -o libplugin.so plugin.cpp
./main
rm -rf main libplugin.so
