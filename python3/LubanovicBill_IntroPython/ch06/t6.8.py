#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class Element():
    def __init__(self, name, symbol, number):
        self.__name = name
        self.__symbol = symbol
        self.__number = number
    @property
    def name(self):
        return self.__name
    @property
    def symbol(self):
        return self.__symbol
    @property
    def number(self):
        return self.__number
    def __str__(self):
        return "Element(name = " + self.name + ", symbol = " + self.symbol + ", number = " + str(self.number) + ")"
    def dump(self):
        #return "(" + self.name + ", " + self.symbol + ", " + str(self.number) + ")"
        print("(", self.name, ", ", self.symbol, ", ", self.number, ")")
        
#a = Element('Hydrogen', 'H', 1)
a = Element(**dict([('name', 'Hydrogen'),('symbol', 'H'),('number', 1)]))
print(a)
a.dump()
