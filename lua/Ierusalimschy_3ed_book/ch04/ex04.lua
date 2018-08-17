#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function room1()
    print("In room1")
    local move = io.read()
    if move == "s" then return room3
    elseif move == "d" then return room2
    else
        print("Invalid move")
    end
    return room1
end

function room2()
    print("In room2")
    local move = io.read()
    if move == "s" then return room4
    elseif move == "a" then return room1
    else
        print("Invalid move")
    end
    return room2
end

function room3()
    print("In room3")
    local move = io.read()
    if move == "w" then return room1
    elseif move == "d" then return room4
    else
        print("Invalid move")
    end
    return room3
end

function room4()
    print("In room4")
end

local nextroom = room1
repeat
    nextroom = nextroom()
until nextroom == room4
print("successfull exit :)")
