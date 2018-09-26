#!/bin/bash
cd build && rm -rf `ls | grep -e "emptydir" -v` * && cmake ../ && make && touch emptydir
