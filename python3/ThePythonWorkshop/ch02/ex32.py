# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. Experiments with initialize sets with lists")
    s1 = set([1, 2, 3, 4, 5, 6])
    print(s1)
    s2 = set([1, 2, 2, 3, 4, 4, 5, 6, 6])
    print(s2)
    s3 = set([3, 4, 5, 6, 6, 6, 1, 1, 2])
    print(s3)
    print("\n#2. Initialize set directly")
    s4 = {'apple', 'orange', 'banana' }
    print(s4)
    print("\n#3. Extend set")
    s4.add('pineapple')
    print(s4)

def main():
    doAction()

if __name__ == "__main__":
    main()
