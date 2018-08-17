#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
x1 = [=[
<![CDATA[
Hello world
]]>
]=]

print(x1)

x2 = [[
<![CDATA[
Hello world
]
]]
x3 = "]>"
print(x2 .. x3)

x4 = "<![CDATA[\z
Hello world\z
    ]]>"

print(x4)
