#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function printMas(mas)
    print(table.unpack(mas))
end

printMas {1, 2, 3}
printMas({nil, 10, 20})
printMas( { [[
hello
world
]], [[
This is i'am
again :)
]]})
printMas({"one", nil, "two", nil, "three"})
