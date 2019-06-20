#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com

def nonbuggy(arg, result=None):
    if result is None:
        result = []
    result.append(arg)
    print(result)

l = []
nonbuggy('1', l)
nonbuggy('2', l)