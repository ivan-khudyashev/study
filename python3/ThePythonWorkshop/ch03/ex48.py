# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def sum_first_n(n):
    result = n
    for i in range(n):
        result += i
    return result


def doAction():
    print("Test program")
    print(sum_first_n(100))


def main():
    doAction()


if __name__ == "__main__":
    main()
