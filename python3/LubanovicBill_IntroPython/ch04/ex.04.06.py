# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    s = { i for i in range(10) if i%2 }
    print(s)

def main():
    doAction()

if __name__ == "__main__":
    main()
