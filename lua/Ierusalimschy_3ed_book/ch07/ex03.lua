#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function notconsist(list, word)
    for i=1,#list do
        if list[i] == word then
            return false
        end
    end
    return true
end

local function iter(state, el)
    -- print("--- next iteration")
    while state.line do 
        local s, e = string.find(state.line, "%w+", state.pos)
        if s then
            local nextW = string.sub(state.line, s, e)
            -- print("Finding new word:", nextW)
            state.pos = e + 1
            if notconsist(state.distinctWords, nextW) then
                -- print("++This new word unique, adding it")
                state.distinctWords[#state.distinctWords + 1] = nextW
                return nextW
            end
        else
            -- print("read next line")
            state.pos = 1
            state.line = io.read()
        end
    end
    return nil
end
local function uniqueWords()
    local state = {}
    state.line = io.read()
    state.pos = 1
    state.distinctWords = {}
    return iter, state, nil
end

for w in uniqueWords() do print(w) end
