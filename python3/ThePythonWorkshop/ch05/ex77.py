# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import datetime


class Dairy():
    christmas = datetime.date(datetime.datetime.now().year, 12, 25)
    def __init__(self, birthday, wedding):
        self.birthday = birthday
        self.wedding = wedding

    @staticmethod
    def format_date(date):
        return date.strftime('%d %b %Y')

    def show_birthday(self):
        return self.format_date(self.birthday)

    def show_wedding(self):
        return self.format_date(self.wedding)


def doAction():
    my_dairy = Dairy( \
        birthday=datetime.date(1983, 11, 10), \
        wedding=datetime.date(2017, 8, 5) \
    )
    print('My birthday: ', my_dairy.show_birthday())
    print('My wedding: ', my_dairy.show_wedding())
    print('Christmas: ', my_dairy.format_date(my_dairy.christmas))


def main():
    doAction()


if __name__ == "__main__":
    main()
