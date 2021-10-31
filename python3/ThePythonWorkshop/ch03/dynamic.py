# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import time


stored_results = {}


def sum_to_n(n):
    start_time = time.perf_counter()
    result = 0
    catchMsg = ""
    for i in reversed(range(1, n + 1)):
        if i in stored_results:
            catchMsg = 'Stopping sum at {} because we have previously computed it'.format(i)
            result += stored_results[i]
            break
        else:
            result += i
    stored_results[n] = result
    total_time = time.perf_counter() - start_time
    print(catchMsg)
    print(total_time, "seconds")
    return result
