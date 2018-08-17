#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function integral(f, delta)
    local delta = delta or 1e-2
    return 
        function(x)
            local deltaX = 0
            local retVal = 0
            while deltaX < x do
                retVal = retVal + 0.5 * delta *
                  (f(deltaX) + f(deltaX + delta) )
                deltaX = deltaX + delta
            end
            return retVal
        end
end

function f(x)
    return x^2
end

function ff(x)
    return (1/3) * x^3
end

F = integral(f)
print("F(f)(0.5)", F(0.5), "F(0.5)", ff(0.5))
