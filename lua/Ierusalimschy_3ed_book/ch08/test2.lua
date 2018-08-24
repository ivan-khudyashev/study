#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function errException(str)
    print(str)
    error("Error exception")
end

ok, res = pcall(errException, "hello :)")
if ok then
    print("No error")
else
    print("Error while execute: " .. res)
end
