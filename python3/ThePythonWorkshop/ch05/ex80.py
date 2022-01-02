# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Temperature():
    def __init__(self, celsius):
        self.celsius = celsius

    @property
    def fahrenheit(self):
        return self.celsius * 9/5 + 32

    @fahrenheit.setter
    def fahrenheit(self, value):
        self.celsius = (value - 32) * 5/9


def doAction():
    temp = Temperature(5)
    print("{} F* ({} C*)".format(temp.fahrenheit, temp.celsius))
    temp.fahrenheit = 32
    print("{} F* ({} C*)".format(temp.fahrenheit, temp.celsius))


def main():
    doAction()


if __name__ == "__main__":
    main()
