# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def countdown(n):
    if n == 0:
        print('loftoff!')
    else:
        print(n)
        return countdown(n - 1)


def doAction():
    countdown(3)


def main():
    doAction()


if __name__ == "__main__":
    main()
