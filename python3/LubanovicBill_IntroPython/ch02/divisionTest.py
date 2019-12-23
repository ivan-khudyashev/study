# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("Tests with divisioin with different signs")
    a = 78
    b = 33
    print("\t1)Both positive. (" + str(a) + " fulldiv " + str(b) + ") = (" + str(a // b) + ", " + str(a % b) + ")")
    print("\t2)Pos and Neg. (" + str(a) + " fulldiv " + str(-b) + ") = (" + str(a // -b) + ", " + str(a % -b) + ")")
    print("\t3)Neg and Pos. (" + str(-a) + " fulldiv " + str(b) + ") = (" + str(-a // b) + ", " + str(-a % b) + ")")
    print("\t4)Both negative. (" + str(-a) + " fulldiv " + str(-b) + ") = (" + str(-a // -b) + ", " + str(-a % -b) + ")")

def main():
    doAction()

if __name__ == "__main__":
    main()
