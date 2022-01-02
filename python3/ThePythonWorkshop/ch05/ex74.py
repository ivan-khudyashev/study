# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Pet():
    """
    A class to capture information regarding my pets, just incase
    I lose track of them.
    """
    is_human = False
    owner = "Khudyashev Ivan"

    def __init__(self, height):
        self.height = height

    def is_tall(self):
        return self.height >= 50


def doAction():
    bowser = Pet(40)
    print("Is Bowser tall?\n> ", bowser.is_tall())
    bowser.height = 60
    print("Bowser grow up")
    print("And now is Bowser tall?\n> ", bowser.is_tall())


def main():
    doAction()


if __name__ == "__main__":
    main()
