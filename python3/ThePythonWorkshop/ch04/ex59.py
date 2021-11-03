# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
def doAction():
    with open('pg37431.txt') as f:
        print(f.read(5))
    with open('pg37431.txt') as f:
        print(f.readline())
    with open('pg37431.txt') as f:
        for i in range(200):
            f.readline()
        print("line 201: ")
        print(f.readline())


def main():
    doAction()


if __name__ == "__main__":
    main()
