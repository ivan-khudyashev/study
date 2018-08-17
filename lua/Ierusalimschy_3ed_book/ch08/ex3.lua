#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function genStringRep(numberOfRepeat)
    if type(numberOfRepeat) ~= "number" then return nil end
    local n = math.floor(numberOfRepeat)
    local functionText = "function stringrep_" .. tostring(n)
    functionText = functionText .. "(s)\n\tlocal r = \"\""
    while n > 0 do
        if n%2 ~= 0 then
            functionText = functionText .. "\n\tr = r .. s"
        end
        if n > 1 then
            functionText = functionText .. "\n\ts = s .. s"
        end
        n = math.floor(n/2)
    end
    functionText = functionText .. "\n\treturn r\nend\n\nreturn stringrep_"
    functionText = functionText .. tostring(numberOfRepeat) .. "('*')"
    return load(functionText)
end

f = genStringRep(100000000)
local str = f()
--[[
print("Input positive integer(for generating function for string-multiplication):")
local n = io.read("*n")
if n > 0 then
    f = genStringRep(n)
    local str = f()
    -- print(str)
else
    print("You must input positive integer")
end
--]]
