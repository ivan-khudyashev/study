# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Person():
    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name

    @property
    def full_name(self):
        return "{} {}".format(self.first_name, self.last_name)

def doAction():
    customer = Person('Mary', 'Lou')
    print('Customer full name: {}'.format(customer.full_name))
    customer.full_name = 'Mary Schmidt'


def main():
    doAction()


if __name__ == "__main__":
    main()
