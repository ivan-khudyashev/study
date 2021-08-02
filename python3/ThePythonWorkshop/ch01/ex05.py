# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    x = 5
    print("now x = {}".format(x))
    y = 2
    print("now y = {}".format(y))
    print("x + x - y**2 = {}".format(x + x - y**2))
    x, y = 8, 5
    print("now (x, y) = ({}, {})".format(x, y))
    print("x // y = {}".format(x//y))

def main():
    doAction()

if __name__ == "__main__":
    main()
