# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def factorial_iterative(n):
    result = 1
    for i in range(n):
        result *= i + 1
    return result


def factorial_recursive(n):
    if n == 1:
        return 1
    else:
        return n * factorial_recursive(n - 1)


def doAction():
    msg_iter = "Test iterative factorial function witn n = {}: {}"
    msg_recur = "Test recursive factorial function witn n = {}: {}"
    n = 5
    print(msg_iter.format(n, factorial_iterative(n)))
    print(msg_recur.format(n, factorial_recursive(n)))


def main():
    doAction()


if __name__ == "__main__":
    main()
