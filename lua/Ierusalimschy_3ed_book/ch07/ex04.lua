#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local iter
local function allSubString(str)
    local state= { nextStart = 1, nextLen = 0, str = str}
    return iter, state, nil
end

iter = function(state)
    while state.nextStart <=#state.str do
        local curMaxLen = #state.str - state.nextStart + 1
        while state.nextLen < curMaxLen do
            state.nextLen = state.nextLen + 1
            return string.sub(state.str, state.nextStart, 
              state.nextStart + state.nextLen - 1)
        end
        state.nextStart = state.nextStart + 1
        state.nextLen = 0
    end
    return nil
end

for ss in allSubString("hello") do print(ss) end
