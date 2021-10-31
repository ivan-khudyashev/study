# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
from fibonacci import fibonacci_recursive


def doAction():
    msg = "Number in fibonacci sequence on position {} is {}"
    for pos in [3, 10, 50]:
        print(msg.format(pos, fibonacci_recursive(pos)))


def main():
    doAction()


if __name__ == "__main__":
    main()
