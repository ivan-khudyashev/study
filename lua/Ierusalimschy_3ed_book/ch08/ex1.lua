#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function iteratorByCodeWithPrefix(code, prefix)
    local state = {code = code, prefix = prefix, stage = 0}
    return 
        function ()
            if state.stage < 1 then
                state.stage = state.stage + 1
                return state.prefix
            end
            if state.stage < 2 then
                if type(state.code) == "string" then
                    state.stage = state.stage + 1
                    return state.code
                else
                    if type(code) ~= "function" then
                        error("Loaded code must be string or function!")
                    end
                    local nextCode
                    for nextCode in code() do
                        return nextCode
                    end
                    state.stage = state.stage + 1
                end
            end
            return nil
        end
end

function loadwithprefix(code, prefix)
    if code == nil then
        if prefix ~= nil and type(prefix) == "string" then
            return load(prefix)
        else
            return nil
        end
    end
    local lprefix = prefix
    if prefix == nil or type(prefix) ~= "string" then
        lprefix = ""
    end
    return load(iteratorByCodeWithPrefix(code, lprefix))
end

code = "print(somestr)"
prefix = "somestr = 'examples becoming more crazy\\n But its very GREAT!'"
f = loadwithprefix(code, prefix)
f()
