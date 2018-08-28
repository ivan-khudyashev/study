#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
a = 15
local a = 10
function foo()
    print(a)
end

-- foo()
a = nil
print(_G.a)
