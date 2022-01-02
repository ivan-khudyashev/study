# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


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

def doAction():
    jess = Baby('Jess', 'McDonald')
    tom = Adult('Tom', 'Smith')
    jess.speak()
    tom.speak()


def main():
    doAction()


if __name__ == "__main__":
    main()
