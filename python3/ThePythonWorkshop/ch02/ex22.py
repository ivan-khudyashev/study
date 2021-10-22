# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    m = [ [1, 2, 3], [4, 5, 6]]
    print(m[1][1])
    print("Print full matrix m with indexes:")
    for i in range(len(m)):
        for j in range(len(m[i])):
            print(m[i][j])
    print("Print full matrix m with range-objects:")
    for row in m:
        for col in row:
            print(col)


def main():
    doAction()

if __name__ == "__main__":
    main()
