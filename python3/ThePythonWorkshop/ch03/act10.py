# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
from fibonacci import fibonacci_iterative


def doAction():
    msg = "Number in fibonacci sequence on position {} is {}"
    for pos in [3, 10]:
        print(msg.format(pos, fibonacci_iterative(pos)))


def main():
    doAction()


if __name__ == "__main__":
    main()
