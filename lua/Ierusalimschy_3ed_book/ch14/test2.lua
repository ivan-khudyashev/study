#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
a = 10
print("current _ENV = ", _ENV)
print("Previous _G = ", _G)
print("Previous_G._G = ", _G._G)
_ENV = {_G = _G, print = _G.print}
a = 11
print("New _G = ", _G)
print("New _G._G = ", _G._G)
print("current _ENV = ", _ENV)
