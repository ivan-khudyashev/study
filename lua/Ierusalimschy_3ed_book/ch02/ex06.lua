#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
a = {}
a.a = a;
print("Initial")
print(a.a.a.a)
print(type(a.a.a.a))
a.a.a.a = 3
print("a.a After equal 3")
print(a.a)
print(type(a.a))
print("And finally a.a.a.a")
print(a.a.a.a)
print(type(a.a.a.a))
