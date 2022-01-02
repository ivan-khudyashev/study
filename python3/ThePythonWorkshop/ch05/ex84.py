# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import datetime


class Person():
    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name


class Baby(Person):
    def speak(self):
        print("Bla-bla-bla")


class Adult(Person):
    def speak(self):
        print("Hello, my name is {}".format(self.first_name))


class Calendar():
    def book_apointment(self, date):
        print("Book apointment for date {}".format(date))


class OrganizedAdult(Adult, Calendar):
    pass


class OrganizedBaby(Baby, Calendar):
    def book_apointment(self, date):
        print("Note that you are booking appointment with a baby.")
        super().book_apointment(date)


def doAction():
    andres = OrganizedAdult('Andres', 'Gomez')
    boris = OrganizedBaby('Boris', 'Bubmlebutton')
    print("Andres speak: ")
    andres.speak()
    print("Boris speak: ")
    boris.speak()
    print("Book apointment for boris:")
    boris.book_apointment(datetime.date(2021, 1, 1))


def main():
    doAction()


if __name__ == "__main__":
    main()
