#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class Thing3():
    def __init__(self, letters):
        self.letters = letters
        
t_inst = Thing3('xyz')
print("'letters' attribute of instance of class Thing3", t_inst.letters)