# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
def doAction():
    print( \
        sum(filter( \
            lambda x: x % 3 == 0 or x % 7 ==0, \
            range(1000) \
        )) \
    )


def main():
    doAction()


if __name__ == "__main__":
    main()
