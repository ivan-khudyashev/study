# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def get_second_element(mylist):
    if len(mylist) > 1:
        return mylist[1]
    else:
        return 'List was too small'


def doAction():
    print(get_second_element([1, 2, 3]))
    print(get_second_element([1]))


def main():
    doAction()


if __name__ == "__main__":
    main()
