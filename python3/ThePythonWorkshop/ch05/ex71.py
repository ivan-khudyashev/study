# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Pet():
    """
    A class to capture information regarding my pets, just incase
    I lose track of them.
    """
    is_human = False
    owner = "Khudyashev Ivan"


def doAction():
    chabbles = Pet()
    print("Is new pet human: ", chabbles.is_human)
    print("Owner of chabbles: ", chabbles.owner)
    print("Info about Pet class:")
    print(chabbles.__doc__)


def main():
    doAction()


if __name__ == "__main__":
    main()
