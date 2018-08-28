#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
a = 10
local a = 11
do
    local a = 12
    print("Just variable a = ", a)
    print("Global variable a = ", _G.a)
    print("Variable from _ENV a = ", _ENV.a)
end
print("----------")
print("Out from local code")
print("Just variable a = ", a)
print("Global variable a = ", _G.a)
print("Variable from _ENV a = ", _ENV.a)
