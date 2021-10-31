# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def binary_search(item, l):
    slice_start = 0
    slice_end = len(l) - 1
    found = False
    idx = -1
    while slice_start <= slice_end and not found:
        location = (slice_start + slice_end) // 2
        if l[location] == item:
            idx = location
            found = True
        else:
            if item < l[location]:
                slice_end = location - 1
            else:
                slice_start = location + 1
    return idx


def main():
    search_for = 11
    l = [2, 3, 5, 8, 11, 12, 18]
    idx = binary_search(search_for, l)
    print("find {} with index {}".format(search_for, idx))


if __name__ == "__main__":
    main()
