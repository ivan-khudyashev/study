#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class Bear():
    def eats(self):
        print('berries')
        
class Rabbit():
    def eats(self):
        print('clover')
        
class Octothorpe():
    def eats(self):
        print('campers')

def printFood(obj):
    print(type(obj))
    obj.eats()
    print('-------')
        
b = Bear()
r = Rabbit()
o = Octothorpe()
l = [b, r, o]
for item in l:
    printFood(item)