#!/usr/bin/lua52
-- Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
-- Learning Lua Project
local socket = require "socket"

host = "www.w3.org"
file = "/TR/REC-html32.html"

local httpQuery = "GET " .. file .. " HTTP/1.1\r\n\r\n"
  -- .. "Host: " .. host .. "\r\n"
print(httpQuery)

c = assert(socket.connect(host, 80))

c:send(httpQuery)

while true do
    local s, status, partial = c:receive(2^10)
    io.write(s or partial)
    if status == "closed" then break end
end

c:close()

