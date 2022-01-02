# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Country():
    def __init__(self, name='Unspecified', population=None, size_kmsq=None):
        self.name = name
        self.population = population
        self.size_kmsq = size_kmsq

    def size_mile_sq(self, conversation_rate=0.621371):
        return self.size_kmsq * conversation_rate**2


def doAction():
    algeria = Country(name='Algeria', size_kmsq=2.382e6)
    print( \
        'Territory of {} in square miles = {}'.format( \
            algeria.name, algeria.size_mile_sq() \
        ) \
    )
    print('Oops, wrong rate. Use correct rate:')
    print( \
        'Territory of {} in square miles = {}'.format( \
            algeria.name, algeria.size_mile_sq(conversation_rate=0.6) \
        ) \
    )


def main():
    doAction()


if __name__ == "__main__":
    main()
