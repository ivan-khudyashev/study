# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
from fibonacci import fibonacci_recursive, fibonacci_dynamic
import time


def doAction():
    msg = "(func {})Fibonacci num on pos {} is {}. time = {}"
    fib_num = 0
    tstFuncs = {"recursive": fibonacci_recursive, "dynamic": fibonacci_dynamic}
    for pos in [10, 100, 300]:
        for f_key, func in tstFuncs.items():
            start_time = time.perf_counter()
            fib_num = func(pos)
            total_time = time.perf_counter() - start_time
            print(msg.format(f_key, pos, fib_num, total_time))
        print("\n\n")


def main():
    doAction()


if __name__ == "__main__":
    main()
