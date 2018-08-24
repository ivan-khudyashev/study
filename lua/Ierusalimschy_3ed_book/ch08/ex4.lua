#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function f()
    return 1
end

a, b, c= pcall(pcall, f)
print("first result = ", a, b, c)
-- I can't imagine what exactly must be f in order pcall(pcall, f) return false!
