#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local function masToStr(massiv)
    str = ""
    for k, v in pairs(massiv) do
        str = str .. tostring(v) .. " "
    end
    return str
end

local function genCombination(massiv, p)
    if p.n == nil or p.m == nil or p.curN == nil or p.curM == nil
      or p.curComb == nil then 
        error("Wrong argument 'param'") 
    end
    -- If finish forming current combination THEN send it from
    --  iterator
    if p.curM == 0 then
        coroutine.yield(p.curComb)
    -- And here we can immidiately create next combination
    --  and we do that and send it from iterator
    elseif p.curN == p.curM then
        for i = 1, p.curM do
            table.insert(p.curComb, massiv[i])
        end
        coroutine.yield(p.curComb)
        -- But after creation we must back to original stage
        for i = 1, p.curM do
            table.remove(p.curComb, #p.curComb)
        end
    else
        -- Generate combination C(n-1, m-1)
        table.insert(p.curComb, massiv[p.curN])
        p.curN = p.curN - 1
        p.curM = p.curM - 1
        genCombination(massiv, p)
        -- Restore combination after C(n-1, m-1)
        p.curM = p.curM + 1
        table.remove(p.curComb, #p.curComb)
       
        -- Generate combination C(n-1, m)
        genCombination(massiv, p)
        -- Restore combination after C(n-1, m)
        p.curN = p.curN + 1
    end
end

local function combinations(massiv, combLen)
    if combLen < 1 or combLen > #massiv
    then error("Wrong size of combination") 
    end
    local param = {n = #massiv, m = combLen, curN = #massiv, 
      curM = combLen, curComb = {}}
    local revMassiv = {}
    for i = #massiv, 1, -1 do revMassiv[#massiv - i + 1] = massiv[i] end
    return coroutine.wrap(function() genCombination(revMassiv, param) end)
end

i = 1
for c in combinations({"a", "b", "c", "d", "e"}, 3) do
    print(i, masToStr(c))
    i = i + 1
end
