# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def getInputInt(errMsg):
    while True:
        offer = input()
        try:
            offer = int(offer)
        except Exception:
            print(errMsg)
            continue
        if offer <= 0:
            print(errMsg)
            continue
        break
    return offer

def doAction():
    print('A one bedroom in the Bay Area is listed at $599,000')
    print('Enter your offer of the house: ')
    offer = getInputInt('offer must be positive integer, try again: ')
    print('Enter your best offer on the house: ')
    best = getInputInt('best offer must be positive integer, try again: ')
    print('How much more do you want to offer each time: ')
    increment = getInputInt('increment must be positive integer, try again: ')
    offerAccepted = False
    acceptedPrice = 650000
    while offer <= best:
        if offer >= acceptedPrice:
            offer_accepted = True
            print('Your offer of', offer, 'has been accepted!')
            break
        print('''We're sorry, you're offer of''', offer, 'has not been accepted.')
        offer += increment


def main():
    doAction()

if __name__ == "__main__":
    main()
