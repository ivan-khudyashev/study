#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
-- do
local a = function()
    print "this is test function"
end
-- end

a()
print(a)
a = 10
print(a, type(a))
