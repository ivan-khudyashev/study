#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
x = 10
function g()
    print(x)
    x = 20
end
function f()
    local x = 30
    g()
end
f()
print("x = ", x)
