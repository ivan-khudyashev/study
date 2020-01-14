# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    l = [i for i in range(10) if not (i%2) ]
    print(l)

def main():
    doAction()

if __name__ == "__main__":
    main()
