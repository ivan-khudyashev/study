#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
import t7_7
import re

#l = re.findall(r'\b\w*?r\b',t7_7.mammoth)
l = re.findall(r'[bcdfghjklmnpqrstvwxz]*[aeiouy][bcdfghjklmnpqrstvwxz]*[aeiouy][bcdfghjklmnpqrstvwxz]*[aeiouy][bcdfghjklmnpqrstvwxz]*\b',t7_7.mammoth)
print(l)