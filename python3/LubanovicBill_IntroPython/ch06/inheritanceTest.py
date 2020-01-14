# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Person():
    def __init__(self, name):
        print("Initialize instance of class <Person> with name: " + str(name))
        self.name = name
    def __str__(self):
        return "Person(" + str(self.name) + ")"

class MDPerson(Person):
    def __init__(self, name, spec):
        print("Initialize instance of class <MDPerson> with name: " + str(name))
        super().__init__(name)
        self.spec = spec

class Surgeon(MDPerson):
    def __init__(self, name):
        print("Initialize instance of class <Surgeon> with name: " + str(name))
        super().__init__(name, "surgeon")

def doAction():
    delStrWidth = 70
    p = Person("Ivan")
    print("Person: " + str(p))
    print("-" * delStrWidth)
    md = MDPerson("House", "diagnosis")
    print("MDPerson: " + str(md))
    print("-" * delStrWidth)
    s = Surgeon("Chaise")
    print("Surgeon: " + str(s))
    print("-" * delStrWidth)

def main():
    doAction()

if __name__ == "__main__":
    main()
