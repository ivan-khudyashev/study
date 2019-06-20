#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com

def upper_func(word):
    return word.upper()

def edit_text(words, func):
    for word in words:
        print(func(word))
        
edit_text(['hello', 'world', 'here', 'i', 'am'], lambda arg: arg.upper())