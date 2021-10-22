# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def mulMatrix(X, Y):
    if len(X) < 1 and len(Y) < 1:
        return []
    if len(X) < 1 or len(Y) < 1:
        raise Exception("Can't multiply matrices: not matched dimensions")
    # Check dimensions for X
    for m in [X, Y]:
        dimM = len(m[0])
        for row in m:
            if dimM != len(row):
                raise Exception("Matrix has not consistency dimension")
    rowDimension = len(X)
    colDimension = len(Y[0])
    scalarMulDimension = len(X[0])
    Z = [ [0] * colDimension for row in range(rowDimension) ]
    for iRow in range(rowDimension):
        for iCol in range(colDimension):
            for iScalarMul in range(scalarMulDimension):
                Z[iRow][iCol] += X[iRow][iScalarMul] * Y[iScalarMul][iCol]
    return Z


def printMatrix(X):
    for r in X:
        print(r)


def doAction():
    X = [
        [1, 2],
        [4, 5],
        [3, 6]
    ]
    Y = [
        [1, 2, 3, 4],
        [5, 6, 7, 8]
    ]
    Z = mulMatrix(X, Y)
    if not Z is None:
        printMatrix(Z)

def main():
    doAction()

if __name__ == "__main__":
    main()
