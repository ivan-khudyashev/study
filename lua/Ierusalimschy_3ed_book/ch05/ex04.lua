#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function printAllCombination(mas)
    local n = #mas
    -- use all lengthes
    for m = 1, n do
        printC_n_m(mas, #mas, n, m)
    end
end

function printC_n_m(mas, sizeMas, n, m, ...)
    if n < m then return end
    local postfix = table.pack(...)
    if m == 0 then
        if postfix[1] ~= nil then
            print(table.unpack(postfix))
        end
    elseif n == m then
        local printVector = {}
        local i = 1
        for j = 1, postfix.n do
            printVector[i] = postfix[j]
            i = i + 1
        end
        for j = sizeMas - n + 1, sizeMas do
            printVector[i] = mas[j]
            i = i + 1
        end
        print(table.unpack(printVector))
    else
        printC_n_m(mas, sizeMas, n - 1, m - 1, mas[1 + sizeMas - n], ...)
        printC_n_m(mas, sizeMas, n - 1, m, ...)
    end
end

mas = {1, 2, 3, 4}
-- printC_n_m(mas, #mas, #mas, 3)
printAllCombination(mas)
