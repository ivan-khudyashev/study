# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def convert_currency(amount, rate, margin=0):
    return amount * rate * (1 + margin)


def compute_usd_total(amount_in_aud=0, amount_in_gbp=0):
    total = 0
    total += convert_currency(amount_in_aud, 0.78)
    total += convert_currency(amount_in_gbp, 1.29, 0.01)
    return total

def doAction():
    print(compute_usd_total(amount_in_gbp=10))


def main():
    doAction()


if __name__ == "__main__":
    main()
