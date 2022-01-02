# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import random


class Pet():
    """
    A class to capture information regarding my pets, just incase
    I lose track of them.
    """
    is_human = False
    owner = "Khudyashev Ivan"

    def __init__(self, name, height=None):
        self.name = name
        self.height = height

    @classmethod
    def changeOwner(cls, owner):
        if type(owner) == str:
            cls.owner = owner

    @classmethod
    def owned_by_khudyashev(cls):
        return "Khudyashev" in cls.owner

    @classmethod
    def create_random_height_pet(cls):
        return cls(random.randrange(0, 100))

    def __str__(self):
        return "{} (owned by {})".format(self.name, self.owner)

def doAction():
    mikki = Pet('Mikki', 20)
    print(mikki)
    Pet.owner = "I'am"
    print(mikki)


def main():
    doAction()


if __name__ == "__main__":
    main()
