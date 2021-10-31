# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def bubbleSort(l):
    still_swapping = True
    while still_swapping:
        still_swapping = False
        for i in range(len(l) - 1):
            if l[i] > l[i + 1]:
                l[i], l[i + 1] = l[i + 1], l[i]
                still_swapping = True


def main():
    l = [5, 8, 1, 3, 2]
    print("Unsort array: ", l)
    bubbleSort(l)
    print("Sort array: ", l)


if __name__ == "__main__":
    main()
