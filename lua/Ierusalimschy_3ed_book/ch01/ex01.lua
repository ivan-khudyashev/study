#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project

function fact(n)
    if n < 0  then
        print("Can't calculate negative factorial")
        return -1
    end
    if n == 0 then
        return 1
    else
        return n * fact(n - 1)
    end
end

print("Input number: ")
a = io.read("*n")
print(fact(a))
