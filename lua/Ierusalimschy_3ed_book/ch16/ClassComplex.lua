#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
-- Define prototype object
local Complex = {
    setmetatable = _G.setmetatable, 
    packageLoaded = _G.package.loaded
}
Complex.Complex = Complex
-- Create UpperValue for next FreeName
--  all not-local variable appear in "Complex" table
local _ENV = Complex 
packageLoaded[...] = Complex

re = 0 -- real part of number
im = 0 -- image part of number


function Complex:new(o) -- function Complex.new(Complex, o)
    o = o or {}
    o.re = o[1] or 0
    o.im = o[2] or 0
    setmetatable(o, self)
    self.__index = self
    return o
end

i = Complex:new({0, 1})

function Complex:tostring()
    return "(" .. self.re .. " + " .. self.im .. " i)"
end
