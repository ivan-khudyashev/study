#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
function f2()
    print("\t\tIn function f2(). Generating error!")
    --error("stop calculation")
    assert(io.open("bad name", "r"))
    print("\t\tExit from function f2()")
end

function f1()
    print("\tIn function f1() start")
    f2()
    print("\tIn function f1() end")
end

print("one")
f1()
print("On root level, after all function")
