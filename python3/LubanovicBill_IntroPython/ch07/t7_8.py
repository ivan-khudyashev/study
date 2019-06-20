#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
import t7_7
import re

l = re.findall(r'\bc.*?\b',t7_7.mammoth)
print(l)