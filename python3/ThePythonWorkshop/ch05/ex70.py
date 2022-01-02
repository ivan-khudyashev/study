# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
def doAction():
    delim = "-"
    cntDelim = 50
    my_str = "hello World!"
    # --
    print(delim * cntDelim)
    print("Type of string: ", type(my_str))
    print(delim * cntDelim, "\n\n")
    # --
    print(delim * cntDelim)
    print("doc info about string:")
    print(my_str.__doc__)
    print(delim * cntDelim, "\n\n")
    # --
    print(delim * cntDelim)
    print("Full list of properties and methods for string:")
    print(my_str.__dir__())
    print(delim * cntDelim, "\n\n")
    # --
    print(delim * cntDelim)
    print("Capitalize string: ", my_str.capitalize())
    print(delim * cntDelim, "\n\n")
    # --
    print(delim * cntDelim)
    print("Upper string: ", my_str.upper())
    print(delim * cntDelim, "\n\n")
    # --
    print(delim * cntDelim)
    print("Lower without spaces: ", my_str.lower().replace(' ', ''))
    print(delim * cntDelim, "\n\n")


def main():
    doAction()


if __name__ == "__main__":
    main()
