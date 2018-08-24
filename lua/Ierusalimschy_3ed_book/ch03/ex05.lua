#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function isBooleanValue(val)
    return tostring(val or (val == false)) == "true"
end

print("value a = " .. tostring(a), isBooleanValue(a))
print("boolean value true", isBooleanValue(true))
print("boolean value false", isBooleanValue(false))
