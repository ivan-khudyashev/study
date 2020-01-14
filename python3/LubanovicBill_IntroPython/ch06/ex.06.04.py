# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Element():
    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number
    def __str__(self):
        return self.symbol + "(" + self.name + \
            ", № " + str(self.number) + ")"

def doAction():
    e = Element('Hydrogen', 'H', 1)
    print(e)

def main():
    doAction()

if __name__ == "__main__":
    main()
