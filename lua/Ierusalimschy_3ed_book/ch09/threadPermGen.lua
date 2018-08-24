#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function permgen(a, n)
    local n = n or #a
    if n <= 1 then
        coroutine.yield(a)
    else
        for i = 1, n do
            -- i-th element move on last position
            a[n], a[i] = a[i], a[n]
            -- recursive gen other permutation
            permgen(a, n - 1)
            -- restore i-th element
            a[n], a[i] = a[i], a[n]
        end
    end
end

local function permutations(a)
    local co = coroutine.create(function() permgen(a) end)
    return function()
        local resCode, nextPerm = coroutine.resume(co)
        return nextPerm
    end
end

local function printResult(a)
    for i = 1, #a do
        io.write(a[i], " ")
    end
    io.write("\n")
end

local t = {1, 2, 3}
for p in permutations(t) do
    printResult(p)
end
