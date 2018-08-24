#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
do
    somePacket = {}
    local function f1()
        print "This is local function f1()"
    end

    local function double(n)
        print("local function doubling argument", n, 2*n)
    end
    somePacket[1] = f1
    somePacket[2] = double
end

somePacket[1]()
somePacket[2](10)
print("type(f1)", type(f1), "f1 = ", f1)
