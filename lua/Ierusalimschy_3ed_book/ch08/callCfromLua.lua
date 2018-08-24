#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local path = "/home/ivan/ld_libs/libhelloFromC.so"
local f = package.loadlib(path, "testCfromLua")
f()
local f2 = package.loadlib(path, "printNumber")
f2(101)
local f3 = package.loadlib(path, "printDouble")
f3(102)
local f4 = package.loadlib(path, "printStr")
f4("hello, I print it myself")
