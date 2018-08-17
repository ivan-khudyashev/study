#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function iter(state, el)
    state.n = state.n + 1
    if state.n > state.m then
        return nil
    else
        return state.n
    end
end

local function fromto(n, m)
    local state = {n = n - 1, m = m}
    return iter, state, nil
end
--[[
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
]]
print("Gen.iterator with no state")
for v in fromto(6, 12) do print(v) end
print("Simple for")
for i = 6, 12 do print(i) end
