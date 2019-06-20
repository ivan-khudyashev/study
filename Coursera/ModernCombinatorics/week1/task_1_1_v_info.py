def c_n_k(n, k):
    if n < 1:
        raise "Can' t calculate C(n,k) where n < 1"
    if k == 0 or k == n:
        return 1
    if n < k:
        raise "C(n,k) here define only for case n >= k"
    accum = n
    i = 2
    while i < k:
        accum = int(accum * (n - i + 1) / i)
        i = i + 1
    return accum

def numCntNotFirstPos(n, k):
    if k == n:
        return 0
    return c_n_k(n - 1, k) * 5 ** n

def numCntFirstPos(n, k):
    if k == 0:
        return 0
    return c_n_k(n - 1, k - 1) * 4 * 5 ** (n - 1)

def getInfoN(n):
    """ Calculate all variants with even digit in n-digits number"""
    allVariants = 9 * 10 **( n - 1)
    print("All variants = " + str(allVariants))
    k = 0
    accumulate = 0
    while k <= n:
        cnt_k_evenDigits = numCntNotFirstPos(n, k) + numCntFirstPos(n, k)
        print("For " + str(k) + " even digits there are " + str(cnt_k_evenDigits) + " variants")
        accumulate = accumulate + cnt_k_evenDigits
        k = k + 1
    print("Total accumulate variants = " + str(accumulate))

def infoN_by_evenDigits():
    print("Count all different variants for n-digits number\n\n")
    n = int(input("Input n: "))
    upperLimitN = 100
    lowerLimitN = 3
    if n > upperLimitN or n < lowerLimitN:
        raise Exception(
            "Wrong value for n, must be: " + str(lowerLimitN) +
            " <= n <= " + str(upperLimitN) + ". But get " + str(n)
        )
    getInfoN(n)

def test_C_n_k():
    n = 10
    k = 0
    while k <= n:
        print("C(n,k) = C(" + str(n) + ", " + str(k) + ") = " + str(c_n_k(n, k)))
        k = k + 1

def main():
    infoN_by_evenDigits()

if __name__ == "__main__":
    main()
