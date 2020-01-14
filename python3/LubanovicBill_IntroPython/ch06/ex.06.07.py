# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Element1():
    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number
    def dump(self):
        print("name = " + self.name + ", symbol = " + self.symbol + ", number = " + str(self.number))

class Element2():
    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number
    def __str__(self):
        return "name = " + self.name + ", symbol = " + self.symbol + ", number = " + str(self.number)

def doAction():
    e = Element1('Hydrogen', 'H', 1)
    print("Element1 instance: ", e)
    e = Element2('Hydrogen', 'H', 1)
    print("Element2 instance: ", e)

def main():
    doAction()

if __name__ == "__main__":
    main()
