#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function fromto(n, m)
    local i = n - 1
    return 
    function()
        i = i + 1
        if i > m then return nil
        else
            return i
        end
    end
end

print("Gen.iterator")
for v in fromto(5, 10) do print(v) end
print("Simple for")
for i = 5, 10 do print(i) end
