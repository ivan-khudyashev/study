# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    gen = ( "Got " + str(i) for i in range(10) )
    for i in gen:
        print(i)

def main():
    doAction()

if __name__ == "__main__":
    main()
