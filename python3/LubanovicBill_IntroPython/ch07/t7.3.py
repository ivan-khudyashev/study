#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
from unicodedata import name

pop_bytes = b'\xf0\x9f\x92\xa9'
pop_string = pop_bytes.decode('utf-8')
print(pop_string)
print(name(pop_string))