# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def list_product(my_list):
    result = 1
    for number in my_list:
        result *= number
    return result


def doAction():
    print(list_product([2, 3]))
    print(list_product([2, 10, 15]))

def main():
    doAction()


if __name__ == "__main__":
    main()
