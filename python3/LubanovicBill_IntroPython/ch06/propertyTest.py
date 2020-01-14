# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Person():
    def __init__(self, name):
        self._name = name
    name = property(
        lambda self: "Person name: " + str(self._name),
    )
    @name.setter
    def name(self, newName):
        self._name = newName

def doAction():
    p = Person("Ivan")
    print(p.name)
    p.name = "John"
    print("New name")
    print(p.name)

def main():
    doAction()

if __name__ == "__main__":
    main()
