# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def format_customer(first_name, last_name, location=""):
    return \
        "{fname} {lname}{loc}".format( \
            fname=first_name, \
            lname=last_name, \
            loc=( \
                "" if str(location).strip() == "" \
                else " ({})".format(str(location)) \
            ) \
        )
