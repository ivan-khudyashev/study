# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Thing():
    pass

def doAction():
    example = Thing()
    print("class Thing", Thing)
    print("instance of class Thing:", example)

def main():
    doAction()

if __name__ == "__main__":
    main()
