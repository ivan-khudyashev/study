# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class A():
    someval = 10
    someval1 = 11
    def __init__(self):
        self.someval = 5

    @classmethod
    def watch(cls):
        print("A.someval = " + str(cls.someval))

def doAction():
    A.watch()
    a = A()
    print("someval in A's instance = " + str(a.someval) + "\nsomeval in class A = " + str(A.someval))
    print('-' * 50)
    print("someval1 in A's instance = " + str(a.someval1) + "\nsomeval1 in class A = " + str(A.someval1))


def main():
    doAction()

if __name__ == "__main__":
    main()
