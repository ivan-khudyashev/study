# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


from multiply import list_product

def doAction():
    print(list_product([2, 3]))
    print(list_product([2, 10, 15]))
    print(list_product([-1, 2, 3]))


def main():
    doAction()


if __name__ == "__main__":
    main()
