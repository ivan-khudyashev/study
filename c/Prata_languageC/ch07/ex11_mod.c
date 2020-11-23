// Copyright (C) Khudyashev Ivan, 2018-2020, bahek1983@gmail.com
#include <stdio.h>
#include <string.h>

float vegetablePrice[] = {
    2.05,    /* artichoke   */
    1.15,    /* beet        */
    1.09,    /* carrot      */
    0.8,     /* potato      */
    1.75,    /* tomato      */
    1.07     /* cucumber    */
};
const size_t vegetableCount = sizeof(vegetablePrice) / sizeof(vegetablePrice[0]);

const size_t VEGETABLE_NAME_MAX_LEN = 10;
const char* vegetables[] = {
    "artichoke",
    "beet",
    "carrot",
    "potato",
    "tomato",
    "cucumber"
};
/* throw error if count of vegetables not equal to count of vegetablePrice */
float vegetableOrder[] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};

void makePurchase(void);
_Bool createOrder(void);
void calculateOrder(
    float* totalCharges, float* discount, float* shippingCharges, float* grandTotal
);
void printMenu(char stopSymbol);
float getWeight(void);
void clearInputLineBuffer(void);
float calculateAndPrintWeight(void);

int main(void)
{
    
    printf("Start Program\n\n");
    // program here
    makePurchase();

    printf("\nFinish Program!\n");
    return 0;
}

void makePurchase(void)
{
    float totalCharges, totalWeight, discount, shippingCharges, grandTotal;
    _Bool isContinue = 1;
    char ch;
    while(isContinue && createOrder()) {
        totalWeight = calculateAndPrintWeight();
        if(totalWeight > 0.0) {
            calculateOrder(&totalCharges, &discount, &shippingCharges, &grandTotal);
            printf(
                "You have created Order on $ %.2f (your discount $ %.2f ).\n"
                "Charges per pound is $ %.2f\n"
                "Shipping charges is $ %.2f\nTotal payment is $ %.2f\n\n",
                totalCharges, discount, totalCharges/totalWeight, shippingCharges, grandTotal
            );
        } else {
            printf("Strange weight of order: %.2f\n\n", totalWeight);
        }
        printf("Create next order? (press y/Y if yes):");
        if((ch = getchar()) != 'y' && ch != 'Y') {
            isContinue = 0;
        }
        clearInputLineBuffer();
    }
}

_Bool createOrder(void)
{
    const char stopSymbol = 's';
    _Bool isChooseSomething = 0;
    int retCode = 0;
    char inputSymbol = ' ';
    size_t vegetableNumber;
    /* Zeroing Order */
    for(size_t i = 0; i < vegetableCount; i++) {
        vegetableOrder[i] = 0.0;
    }
    printf("Creating new order.\n");
    /* Add vegetables to order */
    while(inputSymbol != stopSymbol) {
        printMenu(stopSymbol);
        retCode = getchar();
        if(retCode == EOF) {
            return isChooseSomething;
        }
        clearInputLineBuffer();
        inputSymbol = (char)retCode;
        /* In standard execution of exersice here must be switch */
        vegetableNumber = inputSymbol - '0';
        if(vegetableNumber > 0 && vegetableNumber <= vegetableCount) {
            isChooseSomething = 1;
            vegetableOrder[vegetableNumber - 1] += getWeight();
        } else if(inputSymbol != stopSymbol) {
            printf("Wrong choise\n");
        }
    }
    return isChooseSomething;
}
void printMenu(char stopSymbol)
{
    const size_t columnCount = 2;
    const size_t screenWidth = 100;
    const char formatVegItem[] = "%d. %-*s ($ %.2f)";
    size_t countColumnDelimits = 
        (screenWidth / columnCount) - (strlen(formatVegItem) + VEGETABLE_NAME_MAX_LEN);
    const char delimitChar = ' ';
    printf(
        "Add to purchase."
        " Choose vegetables by it's number and enter weight in pounds:\n"
    );
    for(size_t i = 0; i < vegetableCount; i++) {
        printf(
            formatVegItem,
            i + 1, VEGETABLE_NAME_MAX_LEN, vegetables[i], vegetablePrice[i]
        );
        if(((i + 1) % columnCount) == 0) {
            putchar('\n');
        } else {
            for(size_t j = 0; j < countColumnDelimits; j++) {
                putchar(delimitChar);
            }
        }
    }
    if(vegetableCount % columnCount != 0) {
        putchar('\n');
    }
    printf("%c. stop creating order\n", stopSymbol);
}

float getWeight(void)
{
    float pounds = 0.0;
    while(printf("Input weight in pounds: "), scanf("%f", &pounds) != 1) {
        clearInputLineBuffer();
    }
    /* Clear <Enter> in the end of input */
    clearInputLineBuffer();
    return pounds;
}

void clearInputLineBuffer(void)
{
    int ch;
    while((ch=getchar()) != '\n' && ch != EOF) {
        continue;
    }
}

float calculateAndPrintWeight(void)
{
    float totalWeight = 0.0;
    for(size_t i = 0; i < vegetableCount; i++) {
        totalWeight += vegetableOrder[i];
        printf(
            "%s: %.2f by $ %.2f\n",
            vegetables[i], vegetableOrder[i], vegetableOrder[i] * vegetablePrice[i]
        );
    }
    return totalWeight;
}

void calculateOrder(
    float* totalCharges, float* discount, float* shippingCharges, float* grandTotal
)
{
    const float discountLimit = 100.0;
    const float discountPercent = 0.05;
    const float shippingPoundLimit1 = 5.0;
    const float shippingCostLimit1 = 6.5;
    const float shippingPoundLimit2 = 20.0;
    const float shippingCostLimit2 = 14.0;
    const float shippingCostPerPound = 0.5;

    float totalPound = 0.0;
    
    /* Calculate total charges */
    *totalCharges = 0.0;
    for (size_t i = 0; i < vegetableCount; i++) {
        *totalCharges += vegetableOrder[i] * vegetablePrice[i];
    }
    /* Calculate discount */
    *discount = 0.0;
    if(*totalCharges > discountLimit) {
        *discount = *totalCharges * discountPercent;
    }
    /* Calculate shipping charges */
    for(size_t i = 0; i < vegetableCount; i++) {
        totalPound += vegetableOrder[i];
    }
    if(totalPound < shippingPoundLimit1) {
        *shippingCharges = shippingCostLimit1;
    } else if(totalPound < shippingPoundLimit2) {
        *shippingCharges = shippingCostLimit2;
    } else {
        *shippingCharges =
            shippingCostLimit2 + (totalPound - shippingPoundLimit2) * shippingCostPerPound;
    }
    /* Calculate  grand total */
    *grandTotal = *totalCharges - *discount + *shippingCharges;
}