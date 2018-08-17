#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
-- coef = {a0, a1, ..., aN, n = N}
function createPol(coef)
    if coef.n == nil or coef.n < 1 then
        return nil, "Wrong coefficient vector"
    end
    return 
    function(x)
        local retVal = coef[1]
        for i = 2, coef.n do
            retVal = retVal + coef[i] * x^(i - 1)
        end
        return retVal
    end
end

local coef = {5, 1, 1}
coef.n = #coef
local f = createPol(coef)
print("f(1) = ", f(1), "f(2) = ", f(2), "f(3) = ", f(3))
