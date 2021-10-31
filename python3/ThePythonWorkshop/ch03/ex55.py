# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    first_item = lambda my_list: my_list[0] if type(my_list) == list else None
    print(first_item(['cat', 'dog', 'mouse']))
    print(first_item('hello'))


def main():
    doAction()


if __name__ == "__main__":
    main()
