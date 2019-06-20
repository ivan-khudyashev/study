#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
import t7_12
import binascii
import struct

width, height = struct.unpack('<HH', binascii.unhexlify(t7_12.gif)[6:10])
print("width = ", width, ", height = ", height)