#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
--[[
    * multiloadIterator function return iterator, which can be used in
       function 'load()'
    * it's argument 'args' - table as array whith 'args.n' - size of array
    * elements of 'args' interpreted as 'string' or 'iterator-function'
]]
function multiloadIterator(args)
    currentIndex = 1
    return function()
        for i = currentIndex, args.n do
            if type(args[i]) == "string" then
                currentIndex = currentIndex + 1
                return args[i]
            else
                if type(args[i]) == "function" then 
                    local nextcode = args[i]()
                    if nextcode ~= nil then 
                        return nextcode 
                    else
                        currentIndex = currentIndex + 1
                    end
                else
                    currentIndex = currentIndex + 1
                end
            end
        end
        return nil
    end
end

--[[
    * multiload function load and compile code from argument
    * argument of mulitload interpreted as list of values,
       and this values interpreted as string or as iterator
    * if values of argument not (string or iterator) then it
       just skips
]]
function multiload(...)
    args = table.pack(...)
    if args.n < 1 then return nil end
    return load(multiloadIterator(args))
end


-- f = multiload("str = 'this more complex example'", "print(str)", "print('Job Well Done!')")
f = multiload("print(1)", io.lines("testcode.lua", "*L"))
--f = multiload(io.lines("stringrep.lua", "*L"), "print(stringrep_5('*'))")
f()
