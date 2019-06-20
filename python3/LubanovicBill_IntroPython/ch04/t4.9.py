#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
def get_odds():
    for x in range(10):
        if x%2 != 0:
            yield x
        
index = 0
for x in get_odds():
    if index == 2:
        print("third value of generator = ", x)
    index += 1