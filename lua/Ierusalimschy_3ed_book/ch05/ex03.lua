#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function retNotFirst(...)
    local retValSave = {...}
    local retVal = {}
    local j = 1
    for i, val in ipairs(retValSave) do
        if i ~= 1 then
            retVal[j] = val
            j = j+1
        end
    end
    return table.unpack(retVal)
end

print(retNotFirst(1, 2, 3))
print(retNotFirst("one", "three", 3))
print(retNotFirst(nil, 1, 2))
print(retNotFirst(1, 2, nil, 3))
print(retNotFirst(true, false, true))
