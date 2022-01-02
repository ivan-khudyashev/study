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

    @staticmethod
    def show_christmas():
        return Dairy.christmas.strftime('%d %b %Y')

    def show_birthday(self):
        return self.format_date(self.birthday)

    def show_wedding(self):
        return self.format_date(self.wedding)


class CustomDairy(Dairy):
    def __init__(self, birthday, wedding, date_format):
        self.date_format = date_format
        super().__init__(birthday, wedding)

    def format_date(self, date):
        return date.strftime(self.date_format)

    def __str__(self):
        return \
            "Christmas\t\tBirthday\t\tWedding\n" + \
            "{}\t\t{}\t\t{}".format( \
                self.show_christmas(), \
                self.show_birthday(), \
                self.show_wedding() \
            )




def doAction():
    first_dairy = CustomDairy( \
        datetime.date(1983, 11, 10), \
        datetime.date(2017, 8, 5), \
        '%d-%b-%Y' \
    )
    second_dairy = CustomDairy( \
        datetime.date(1991, 7, 1), \
        datetime.date(2017, 8, 5), \
        '%d/%b/%Y' \
    )
    print("First Dairy:")
    print(first_dairy)
    print("\n\nSecond Dairy:")
    print(second_dairy)


def main():
    doAction()


if __name__ == "__main__":
    main()
