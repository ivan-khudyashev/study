# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def fibonacci_iterative(pos):
    if pos < 0:
        raise Exception("Wrong position, it must be > 0")
    if pos == 0:
        return 0
    if pos == 1:
        return 1
    a = 0
    b = 1
    idx = 0
    while idx < pos:
        a, b = b, a + b
        idx += 1
    return a


def fibonacci_recursive(pos):
    return fibonacci_recursive_core(pos)[0]


def fibonacci_recursive_core(pos):
    if pos < 0:
        raise Exception("Wrong position, it must be > 0")
    if pos == 0:
        return 0, 0
    elif pos == 1:
        return 1, 0
    prev = fibonacci_recursive_core(pos - 1)
    return prev[0] + prev[1], prev[0]


fibonacci_saved = {}


def fibonacci_dynamic(pos):
    if pos < 0:
        raise Exception("Wrong position, it must be > 0")
    if pos in fibonacci_saved:
        return fibonacci_saved[pos]
    if pos == 0:
        fibonacci_saved[pos] = 0
        return 0
    elif pos == 1:
        fibonacci_saved[pos] = 1
        return 1
    fibonacci_saved[pos] = fibonacci_dynamic(pos - 1) + fibonacci_dynamic(pos - 2)
    return fibonacci_saved[pos]

