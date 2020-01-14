# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Person():
    def __init__(self, name):
        self.name = name

    def info(self):
        print("This is person with name " + str(self.name))

def doAction():
    p = Person("Ivan")
    Person.info(p)

def main():
    doAction()

if __name__ == "__main__":
    main()
