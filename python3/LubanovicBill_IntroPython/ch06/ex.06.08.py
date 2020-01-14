# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Element():
    def __init__(self, name, symbol, number):
        self.__name = name
        self.__symbol = symbol
        self.__number = number
    @property
    def name(self):
        return self.__name
    @property
    def symbol(self):
        return self.__symbol
    @property
    def number(self):
        return self.__number
    def __str__(self):
        return "name = " + self.name + ", symbol = " + self.symbol + ", number = " + str(self.number)

def doAction():
    e = Element('Hydrogen', 'H', 1)
    print("Element instance: ", e)
    print("Element name: ", e.name)
    print("Element symbol: ", e.symbol)
    print("Element number: ", e.number)

def main():
    doAction()

if __name__ == "__main__":
    main()
