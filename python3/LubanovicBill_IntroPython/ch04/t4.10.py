#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com

def test(func):
    def inlineF(*args, **kwargs):
        print("start")
        func()
        print("end")
    return inlineF

@test
def testf():
    print("This is test function")
    
testf()