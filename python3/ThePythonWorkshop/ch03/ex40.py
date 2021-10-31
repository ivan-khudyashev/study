# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com


def linear_search(item, l):
    result = -1
    for i in range(len(l)):
        if item == l[i]:
            result = i
            break
    return result


def main():
    l = [5, 8, 1, 3, 2]
    search_for = 8
    idx = linear_search(search_for, l)
    print( \
        "finding element {el} in list, found index = {idx}".format( \
            el=search_for, idx=idx \
        ) \
    )


if __name__ == "__main__":
    main()
