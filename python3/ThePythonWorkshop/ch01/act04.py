# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def LCM(n, m):
    isContinue = True
    lcm = n if n > m else m
    while isContinue:
        if  lcm % n  == 0 and lcm % m == 0:
            break
        lcm += 1
    return lcm


def doAction():
    n = 24
    m = 36
    print("LCM({}, {}) = {}".format(n, m, LCM(n, m)))


def main():
    doAction()

if __name__ == "__main__":
    main()
