#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class Duck():
    def __init__(self, input_name):
      self.__name = input_name
    @property
    def myname(self):
      print('inside getter')
      return self.__name
    @myname.setter
    def someName(self, input_name):
      print('inside setter')
      self.__name = input_name

d = Duck('haha')
print(d.myname)
d.someName = 'mumu'
print(d.myname)