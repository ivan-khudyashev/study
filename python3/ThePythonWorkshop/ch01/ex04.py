# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def idStartsWithNumber():
    #1st_number = 1
    pass


def idWithUnderscore():
    first_number = 1
    pass


def idWithDollar():
    #my_$ = 1000.0
    pass


def idDollarFix():
    my_money = 1000.00
    pass


def doAction():
    flist = {
        "idStartsWithNumber": idStartsWithNumber,
        "idWithUnderscore": idWithUnderscore,
        "idWithDollar": idWithDollar,
        "idDollarFix": idDollarFix
    }
    for fname in flist:
        try:
            print("Start {}".format(fname))
            flist[fname]()
            print("Successfully end {}".format(fname))
        except Exception as e:
            print("Found error {}".format(e))


def main():
    doAction()


if __name__ == "__main__":
    main()
