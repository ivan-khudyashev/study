# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def test(func):
    def innerFunc(*args, **kwargs):
        print("start")
        func(*args, **kwargs)
        print("end")
    return innerFunc

@test
def doAction():
    print("Test program")

def main():
    doAction()

if __name__ == "__main__":
    main()
