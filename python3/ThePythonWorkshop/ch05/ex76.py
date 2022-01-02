# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Country():
    def __init__(self, name='Unspecified', population=None, size_kmsq=None):
        self.name = name
        self.population = population
        self.size_kmsq = size_kmsq

    def __str__(self):
        label = self.name
        if self.population:
            label = '%s, population: %d' % (label, self.population)
        if self.size_kmsq:
            label = '%s, size(kmsq) = %d' % (label, self.size_kmsq)
        return label


def doAction():
    chad = Country(name='Chad', population=100)
    print(chad)
    usa = Country(name='USA', size_kmsq=9.8e6)
    print(usa)


def main():
    doAction()


if __name__ == "__main__":
    main()
