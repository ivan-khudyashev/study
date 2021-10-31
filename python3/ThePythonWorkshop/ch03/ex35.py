# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def doAction():
    from my_module import compute
    print(compute([5, 7, 11]))


def main():
    doAction()


if __name__ == "__main__":
    main()
