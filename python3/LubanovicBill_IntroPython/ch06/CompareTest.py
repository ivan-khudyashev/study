#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class MyClass():
    def __init__(self, num):
        self.num = num
    def __eq__(self, other):
        self.num == other

v1 = MyClass(5)
print(v1.num)
print("MyClass(5) == 5: ", v1 == 5)