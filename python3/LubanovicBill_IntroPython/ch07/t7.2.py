#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
from unicodedata import name

mystery = '\U0001f4a9'
pop_bytes = mystery.encode('utf-8')
print(pop_bytes)