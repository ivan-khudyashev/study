# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def doAction():
    l = [4, 2, 7, 3]
    maximum = 0
    for number in l:
        if number > maximum:
            maximum = number
    print(maximum)


def main():
    doAction()


if __name__ == "__main__":
    main()
