# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import math


def doAction():
    nums = [ -3, -5, 1, 4 ]
    for f_x in  map(lambda x: 1 / (1 + math.exp(-x)), nums):
        print(f_x)


def main():
    doAction()


if __name__ == "__main__":
    main()
