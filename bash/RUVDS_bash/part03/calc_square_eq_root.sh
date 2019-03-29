#!/usr/bin/env bash
# Copyright (C) Khudyashev Ivan, 2019, bahek1983@gmail.com
read -p "ax^2 + bx + c = 0. Input koefficient (a, b, c): " a b c
echo "Equation: ${a} * x^2 + ${b} * x + ${c} = 0"
D=$(( ${b} * ${b} - 4 * ${a} * ${c} ))
echo "Discriminant = ${D}"
