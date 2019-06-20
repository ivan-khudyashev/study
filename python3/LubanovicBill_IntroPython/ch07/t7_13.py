#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
import t7_12
import binascii

if binascii.unhexlify(t7_12.gif)[:6] == b'GIF89a':
    print("this is GIF")
else:
    print("Can't recognize file")