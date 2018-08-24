#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function iter(state)
    state.index = state.index + 1
    return state.mas[state.index]
end

t = {2, 4, 8}
st = {mas = t, index = 0}

for val in iter, st do print(val) end
