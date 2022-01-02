# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


class Circle():
    is_shape = True

    def __init__(self, radius, color):
        self.radius = radius
        self.color = color


def doAction():
    first_circle = Circle(2, 'blue')
    second_circle = Circle(3, 'red')
    print('First circle color: ', first_circle.color)
    print('Second circle color: ', second_circle.color)
    print('Is first circle shape: ', first_circle.is_shape)


def main():
    doAction()


if __name__ == "__main__":
    main()
