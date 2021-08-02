# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    x = 14
    print("After assign x = " + str(x))
    x += 1
    print("After increment x = " + str(x))
    x = (x / 5)**2
    print("After divide by 5 and square x = " + str(x))

def main():
    doAction()

if __name__ == "__main__":
    main()
