#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class Element():
    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number
    def __str__(self):
        return "Element(name = " + self.name + ", symbol = " + self.symbol + ", number = " + str(self.number) + ")"
        
a = Element('Hydrogen', 'H', 1)
print(a)
#a = Element(**dict([('name', 'Hydrogen'),('symbol', 'H'),('number', 1)]))