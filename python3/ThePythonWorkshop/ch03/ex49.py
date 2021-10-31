# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def is_prime(x):
    for i in range(2, x):
        if (x % i) == 0:
            return False
    return True


def doAction():
    print("Test program")
    msg = "is {} is prime: {}"
    for n in [7, 1000]:
        print(msg.format(n, is_prime(n)))


def main():
    doAction()


if __name__ == "__main__":
    main()
