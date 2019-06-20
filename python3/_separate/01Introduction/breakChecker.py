#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
print('start')
numbers = [1, 3, 5]
position = 0
while position < len(numbers):
    number = numbers[position]
    if number % 2 == 0:
        print(number)
    #if position == 1:
    #    break
    position += 1
else:
    print("we exit from WHILE on ELSE")
print('end')