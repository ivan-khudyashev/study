# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    age = 20
    print("age < 13: ", age < 13)
    print("age >= 20 and age <= 21: ", age >=20 and age <= 21 )
    print("age != 21: ", age != 21)
    print("age == 19: ", age == 19)
    print("6 == 6.0: ", 6 == 6.0)
    print("6 == '6': ", 6 == '6')
    print("(age >= 20 and age < 30) or (age >= 30 and age < 40): ", \
        (age >= 20 and age < 30) or (age >= 30 and age < 40) \
    )
    print("(20 <= age < 30) or (30 <= age < 40): ",  \
        (20 <= age < 30) or (30 <= age < 40) \
    )

def main():
    doAction()

if __name__ == "__main__":
    main()
