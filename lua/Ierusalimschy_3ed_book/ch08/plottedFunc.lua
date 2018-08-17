#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
print("enter function to be plotted (with variable x):")
local inp = io.read()
local f = assert(load("local x = ...; return " .. inp))
for i = 1,20 do
    print(string.rep("*", f(i)))
end
