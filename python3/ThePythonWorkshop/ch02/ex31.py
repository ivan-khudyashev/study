# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def doAction():
    print("\n#1. Define tuple and show it's length")
    t= ("bread", "milk", "eggs")
    print(len(t))
    print("\n#2. Check changes for tuple")
    try:
        t.append('apple')
    except Exception as e:
        print("Oops: exception arise: ", e)
    try:
        t[2] = 'apple'
    except Exception as e:
        print("Oops: exception arise: ", e)
    print("\n#3. Create new tuple by concatenation")
    print("new tuple: ", t + ('apple', 'orange'))
    print("old tuple: ", t)
    print("\n#4. Define mixed tupples")
    t_mixed = 'apple', True, 3
    print(t_mixed)
    t_shopping = ('apple', 3), ('orange', 2), ('banana', 5)
    print(t_shopping)


def main():
    doAction()


if __name__ == "__main__":
    main()
