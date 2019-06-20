#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
the_bytes = bytes(range(0, 255))
current = bytearray()
for x in the_bytes:
    current.append(x)
    if len(current) == 16:
        print(bytes(current))
        current.clear()
if len(current) > 0:
    print(bytes(current))