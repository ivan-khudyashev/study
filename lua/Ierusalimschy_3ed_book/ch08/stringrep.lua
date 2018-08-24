#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function stringrep(s, n)
    local r = ""
    if n > 0 then
        --[[ 
        n > 1 because last iteration will be r = r .. s
         such as last n value will be 1
        we don't need compare n >= 1 in order to not execute
         last and not necessary s = s .. s
        ]]
        while n > 1 do
            if n%2 ~= 0 then r = r .. s end
            s = s .. s
            n = math.floor(n/2)
        end
        r = r .. s
    end
    return r
end

local res = stringrep("*", 1000000000)
