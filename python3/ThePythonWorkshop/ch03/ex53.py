# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
from dynamic import sum_to_n


def doAction():
    msg = "Sum of first {} numbers is {}"
    nums = [5, 1000000, 1000000]
    for n in nums:
        print(msg.format(n, sum_to_n(n)))


def main():
    doAction()


if __name__ == "__main__":
    main()
