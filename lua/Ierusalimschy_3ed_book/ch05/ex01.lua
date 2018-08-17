#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project

function fconcat(...)
    local strMas = table.pack(...)
    local resultStr = ""
    for i = 1, strMas.n do
        resultStr = resultStr .. tostring((strMas[i] or ""))
    end
    return resultStr
end

print(fconcat('one', ',', 'two'))
print(fconcat(1, 2, "three"))
print(fconcat(false, "hello", ' yo-yo :)'))
print(fconcat(nill, nill, 'last string\nseparated on two lines'))
