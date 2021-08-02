# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print('Iterate "for" on string')
    for i in 'Portland':
        print(i)
    print('Iterate "for" on range, on two bounds')
    for i in range(1, 10):
        print(i)
    print('Iterate "for" on range again with one bound')
    for i in range(10):
        print(i)
    print('Iterate "for" on range with two bounds and increment')
    for i in range(1, 11, 2):
        print(i)
    print('Iterate "for" with negative increment')
    for i in range(3, 0, -1):
        print(i)
    print('Nested loops: iterate name several times')
    name = 'Ivan'
    for i in range(3):
        for l in name:
            print(l)


def main():
    doAction()

if __name__ == "__main__":
    main()
