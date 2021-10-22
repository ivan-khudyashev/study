# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def addFunc(x, y):
    return x + y


def subFunc(x, y):
    return x - y


def linearMatrixOp(X, Y, func):
    # Check dimensions
    if len(X) != len(Y):
        print("Dimensions for matrices are different")
        return None
    if len(X) < 1:
        return []
    baseColDimension = len(X[0])
    for iCol in range(len(X)):
        if len(X[iCol]) != len(Y[iCol]):
            print("Dimensions for row {} are different".format(iCol))
            return None
        if len(X[iCol]) != baseColDimension:
            print( \
                "Not consistent matrix: different dimension for row {}" \
                .format(iCol) \
            )
            return None
    # Create Matrix for results
    Z = [ [0] * len(row) for row in X]
    # iterate through rows
    for i in range(len(X)):
        # iterate through columns
        for j in range(len(X[i])):
            Z[i][j] = func(X[i][j], Y[i][j])
    return Z


def addMatrix(X, Y):
    return linearMatrixOp(X, Y, addFunc)


def subMatrix(X, Y):
    return linearMatrixOp(X, Y, subFunc)


def doAction():
    X = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    Y = [
        [10, 11, 12],
        [13, 14, 15],
        [16, 17, 18]
    ]
    result = [[0]*3, [0]*3, [0]*3]
    print(addMatrix(X, Y))
    print(subMatrix(Y, X))


def main():
    doAction()

if __name__ == "__main__":
    main()
