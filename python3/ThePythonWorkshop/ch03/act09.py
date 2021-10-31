# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
from customer import format_customer


def doAction():
    print(format_customer('John', 'Smith', location='California'))
    print(format_customer('Mareike', 'Schmidt'))


def main():
    doAction()


if __name__ == "__main__":
    main()
