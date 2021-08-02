# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import math

def pythagoreanDistance(x, y, z):
    """
    This is a function for calculate pythagorean distance
    between 3 points x, y, z
    Use formula d = sqrt(x**2 + y**2 + z**2)
    """
    return math.sqrt(x**2 + y**2 + z**2)


def doAction():
    print("pythagorean distance: {}".format(pythagoreanDistance(2, 3, 4)))


def main():
    doAction()

if __name__ == "__main__":
    main()
