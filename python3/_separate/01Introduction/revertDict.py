#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
n2s = { 1: "one", 2: "two", 3: "three"}
s2n = dict()

def variant1():
    for num,s in zip(n2s.keys(), n2s.values()):
        s2n[s] = num
    
def variant2():
    s2n = dict( [(valueItem, keyItem) for (keyItem, valueItem) in n2s.items()] )

variant1()
print("number for string " + str(n2s))
print("string for number " + str(s2n))