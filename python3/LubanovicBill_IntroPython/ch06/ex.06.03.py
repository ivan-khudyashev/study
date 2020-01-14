# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Thing3():
    def __init__(self):
        self.letters = 'xyz'

def doAction():
    t = Thing3()
    print("attribute <letters> from instance of Thing3: ", t.letters)

def main():
    doAction()

if __name__ == "__main__":
    main()
