# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import random


class Pet():
    """
    A class to capture information regarding my pets, just incase
    I lose track of them.
    """
    is_human = False
    owner = "Khudyashev Ivan"

    def __init__(self, height):
        self.height = height

    @classmethod
    def owned_by_khudyashev(cls):
        return "Khudyashev" in cls.owner

    @classmethod
    def create_random_height_pet(cls):
        return cls(random.randrange(0, 100))

def doAction():
    min_value = 1
    max_value = 100
    max_print_value = 20
    num = int(input("Input count of Pets for calculate average height: "))
    if num < min_value or num > max_value:
        print("Oo no, number must be between {} and {}".format(min_value, max_value))
        return None
    avg_height = 0
    for pet in (Pet.create_random_height_pet() for i in range(num)):
        if num <= max_print_value:
            print("Next pet has height %d" % pet.height)
        avg_height += pet.height
    print("Average height for {} pet(s) equal to {}".format(num, avg_height/num))


def main():
    doAction()


if __name__ == "__main__":
    main()
