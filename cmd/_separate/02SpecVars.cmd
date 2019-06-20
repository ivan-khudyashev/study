rem (C) Khudyashev Ivan, 2016

rem @echo off

echo unquotes path: %~1

echo full path to the folder of first agrument dir: %~f1

echo DOS-style (8.3) full path to the folder of first agrument dir: %~fs1

echo Full path to the parent directory of first arg dir: %~dp1

echo Some strange info about parent directory: %~dp0

echo Current first arg path-element name: %~nx1