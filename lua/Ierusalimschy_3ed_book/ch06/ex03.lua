#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local f
local myf
local function f(n)
    return 
    function(n)
        if n > 1e2 then return end
        print("function", n)
        return myf(n + 1)
    end
end

myf = f

local n = 0
newf = myf(n)
newf(n)
--[[
while(true) do
    if(n >1e2) then
        break
    end
    myf = myf(n)
    n = n + 1
end
]]
