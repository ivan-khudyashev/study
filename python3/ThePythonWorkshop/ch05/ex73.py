# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Country():
    def __init__(self, name='Unspecified', population=None, size_kmsq=None):
        self.name = name
        self.population = population
        self.size_kmsq = size_kmsq


def doAction():
    usa = Country(name='USA', size_kmsq=9.8e6)
    print('Properties of Country object:')
    print(usa.__dict__)


def main():
    doAction()


if __name__ == "__main__":
    main()
