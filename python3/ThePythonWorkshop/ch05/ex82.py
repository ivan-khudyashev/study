# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import datetime


class MyDate(datetime.date):
    def add_days(self, n):
        print("MyDate print representatin: ", self)
        print("typeof(MyDate): ", type(self))
        print("Added days: ", n)
        return self + datetime.timedelta(n)


def doAction():
    d = MyDate(2021, 12, 30)
    new_d = d.add_days(5)
    print('*' * 50)
    print(d, type(d), " ---- ", new_d, type(new_d))
    print('*' * 50)
    #print(new_d.add_days(1))


def main():
    doAction()


if __name__ == "__main__":
    main()
