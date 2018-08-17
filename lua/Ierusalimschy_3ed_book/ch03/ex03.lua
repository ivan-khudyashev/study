#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
-- calculate a_0*x^0 + a_1*x^1 + ... + a_n*x^n
function polynomalCalc(coef, x)
    if(coef.n == nil) then
        print("Wrong size of coef")
        return 0
    end
    res = coef.a0
    for i = 1, coef.n do
        if(coef[i] == nil) then
            print("Wrong coefficient: ", i)
            return 0
        end
        res = res + (x^i * coef[i])
    end
    return res
end

coef = {n = 2, a0 = 5, 1, 1}
print(polynomalCalc(coef, 3))
