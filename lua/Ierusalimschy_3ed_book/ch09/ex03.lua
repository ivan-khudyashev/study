#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function dispatch()
    local shList = {
        f1 = coroutine.create(f1),
        f2 = coroutine.create(f2),
        f3 = coroutine.create(f3),
        f4 = coroutine.create(f4),
        f5 = coroutine.create(f5)
    }
    local state, nextF = coroutine.resume(shList["f1"])
    -- print("nextF = ", nextF)
    --print("type(shList[nextF]) = ", type(shList[nextF]))
    while(nextF) do
        state, nextF = coroutine.resume(shList[nextF])
    end
end

function transfer(coroutineName)
    coroutine.yield(coroutineName)
end

function f1()
    print "f1(): I'm function f1"
    print "f1(): call f2()"
    transfer "f2"
    print "f1(): Again here"
    print "f1(): call f5()"
    transfer "f5"
    print "f1(): ending work"
end

function f2()
    print "f2(): I'm f2"
    transfer "f3"
    print "f2(): ending work"
end

function f3()
    print "f3(): I'm f3"
    transfer "f1"
end

function f4()
end

function f5()
    print "f5(): I'm f5"
    transfer "f1"
end

dispatch()
