# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def doAction():
    import my_module
    help(my_module)
    print(my_module.__doc__)


def main():
    doAction()


if __name__ == "__main__":
    main()
