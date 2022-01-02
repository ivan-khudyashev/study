# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import math


class Poligon():
    """Common description for poligon-figure.
    Include information about sides of poligon-figure and its' lenghtes
    """
    def __init__(self, num_sides, lengthes):
        if type(num_sides) != int:
            raise Exception("Number of sides must be number")
        self._num_sides = num_sides
        if type(lengthes) != list:
            raise Exception("Lenghes of sides must be list")
        self._lengthes = []
        for l in lengthes:
            if type(l) != int:
                raise Exception("Length of side must be integer")
            if l <= 0:
                raise Exception("Side of Poligon must be positive number")
            self._lengthes.append(l)

    def __str__(self):
        return "Poligon with {} side(s)".format(self._num_sides)

    @classmethod
    def createEmptyPoligon(cls):
        return cls(0, [])
    
    def _check_num_sides(self):
        if self._num_sides == None or type(self._num_sides) != int:
            return False
        return True

    def _check_lengthes(self):
        if self._lengthes == None or type(self._lengthes) != list:
            return False
        return True

    @property
    def num_sides(self):
        if not self._check_num_sides():
            return None
        return self._num_sides

    @property
    def perimeter(self):
        if not self._check_num_sides() or not self._check_lengthes():
            return None
        if self._num_sides != len(self._lengthes):
            raise Exception("Not consistent sides info")
        return sum(self._lengthes)
    
    def figure_type(self):
        return "Poligon"


class Rectangle(Poligon):
    def __init__(self, height, width):
        super().__init__(4, [height, width, height, width])
        self.height = height
        self.width = width

    @property
    def area(self):
        return self.height * self.width

    def figure_type(self):
        return "Rectangle"


class Square(Rectangle):
    def __init__(self, a):
        super().__init__(a, a)

    def figure_type(self):
        return "Square"


class Triangle(Poligon):
    @staticmethod
    def _check_triangle_sides(a, b, c):
        if \
            a + b < c or \
            a + c < b or \
            b + c < a \
        :
            raise Exception( \
                "It's not possible create triangle with sides: {}, {}, {}".format( \
                    a, b, c \
                ) \
            )

    def __init__(self, a, b, c):
        super().__init__(3, [a, b, c])
        Triangle._check_triangle_sides(a, b, c)
        self.a = a
        self.b = b
        self.c = c

    @property
    def area(self):
        p = (self.a + self.b + self.c) / 2
        return math.sqrt(p * (p - self.a) * (p - self.b) * (p - self.c))

    def figure_type(self):
        return "Triangle"


def doAction():
    rect1 = Rectangle(5, 1)
    tr1 = Triangle(3, 4, 5)
    square1 = Square(5)
    poligons = [rect1, tr1, square1]
    for p in poligons:
        print( \
            "Figure info. Type: {}. Perimeter: {}. Area: {}. Num sides: {} ".format( \
                p.figure_type(), \
                p.perimeter, \
                p.area, \
                p.num_sides \
            ) \
        )


def main():
    doAction()


if __name__ == "__main__":
    main()
