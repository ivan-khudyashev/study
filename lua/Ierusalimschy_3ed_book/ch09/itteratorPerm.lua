#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function printResult(a)
    for i = 1, #a do
        io.write(a[i], " ")
    end
    io.write "\n"
end

function permutations(a)
    if(type(a) ~= "table") then 
        error "Wrong argument. It must be sequence"
    end
    local state = {}
    state.a = a
    state.curIndexes = {1} -- stack for current Index - on each level own index
    state.curPermLen = #a
    state.masLen = #a
    while(true) do
        local nextPerm = genPerm(state)
        if(nextPerm ~= nil) then
            printResult(nextPerm)
        else
            break
        end
    end
    print "\n End computation"
end 

function genPerm(state)
    if(state.curPermLen > state.masLen) then
        return nil
    end
    if(#state.curIndexes == 0) then
        return nil
    end
    if state.curPermLen == 1 then
    local nextPerm = {}
    for i = 1, state.masLen do
        nextPerm[i] = state.a[i]
    end
        while(true) do
            state.curPermLen = state.curPermLen + 1
            state.curIndexes[#state.curIndexes] = nil -- pop from index stack
            if(#state.curIndexes == 0) then
                break
            end
            -- return previous exchanged elements
            local i = state.curIndexes[#state.curIndexes]
            local n =  state.curPermLen
            state.a[i], state.a[n] = state.a[n], state.a[i]
            -- increment index for previous level
            state.curIndexes[#state.curIndexes] = state.curIndexes[#state.curIndexes] + 1
            if(state.curIndexes[#state.curIndexes] <= state.curPermLen) then -- emerge next state
                break
            end
        end
        return nextPerm
    end
    local i = state.curIndexes[#state.curIndexes]
    local n = state.curPermLen
    state.a[i], state.a[n] = state.a[n],state.a[i]
    state.curPermLen = state.curPermLen - 1
    state.curIndexes[#state.curIndexes + 1] = 1
    return genPerm(state)
end

t = {1, 2, 3, 4}
permutations(t)
