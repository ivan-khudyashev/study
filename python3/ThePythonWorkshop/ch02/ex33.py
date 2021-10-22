# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    s5 = {1, 2, 3, 4}
    s6 = {3, 4, 5, 6}
    print("\n#1. Test union operation on sets")
    print(s5 | s6)
    print(s5.union(s6))
    print("\n#2. Test intersection operation on sets")
    print(s5 & s6)
    print(s5.intersection(s6))
    print("\n#3. Test difference operation on sets")
    print(s5 - s6)
    print(s5.difference(s6))
    print("\n#4. Test issubset method on sets")
    print(s5, " is subset of ", s6, ":", s5 <= s6)
    print(s5.issubset(s6))
    s7 = {1, 2, 3}
    s8 = {1, 2, 3, 4, 5}
    print(s7, " is subset of ", s8, ":", s7 <= s8)
    print(s7.issubset(s8))
    print("\n#5. Test proper-subset check on sets")
    print(s7, "is proper subset of ", s8, ":", s7 < s8)
    s9 = {1, 2, 3}
    s10 = {1, 2, 3}
    print(s9, "is proper subset of ", s10, ":", s9 < s10)
    print(s9, "is proper subset of ", s9, ":", s9 < s9)
    print("\n#6. Test superset check on sets")
    print(s8, "is superset of ", s7, ":", s8 >= s7)
    print(s8.issuperset(s7))
    print("\n#7. Test proper-superset check on sets")
    print(s8, "is proper superset of ", s7, ":", s8 > s7)
    print(s8, "is proper superset of ", s8, ":", s8 > s8)


def main():
    doAction()


if __name__ == "__main__":
    main()
