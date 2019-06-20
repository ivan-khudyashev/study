#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com

class OopsException(Exception):
    pass

def test():
    raise OopsException("some message")
    
print("Hello")
try:
    test()
except OopsException as e:
    print("Caught an oops")