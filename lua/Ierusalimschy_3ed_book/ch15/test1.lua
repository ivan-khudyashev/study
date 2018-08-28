#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local Complex = {}
print("Loading Complex-Number lib")
package.loaded[...] = Complex

function Complex.new(r, i) return {r = r, i = i} end

Complex.i = Complex.new(0,1)

function Complex.add(c1, c2)
    return Complex.new(c1.r + c2.r, c1.i + c2.i)
end
