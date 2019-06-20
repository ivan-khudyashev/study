#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com

def many_args(*args):
    print("Positional args: ", args)
    
many_args([1, 2], "word", {'a', 'b'})
#many_args(firstarg=[1, 2], secondarg="word", thirdarg={'a', 'b'})