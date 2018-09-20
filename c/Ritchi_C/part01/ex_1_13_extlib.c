// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
/*
Library with vectors for dynamic extending arrays
*/
#include <stdio.h>
#include <stdlib.h>
#include "ex_1_13_extlib.h"
#define INIT_VECTOR_CAPACITY 32
#define SUCCESS_RETURN 0
#define ERROR_MEMORY_PROBLEM 10
#define ERROR_NOT_DEFINE_VECTOR 20

// Base structure
/*
struct VectInt {
    int *v; // pointer on array
    unsigned int len; // actual size of array
    unsigned int capacity; // max capacity of array
}
*/

int initVectInt(struct VectInt *vect) {
    if(vect == NULL) {
        vect = calloc(1, sizeof(struct VectInt));
        if(vect == NULL) return ERROR_MEMORY_PROBLEM;
    }
    if(vect->v == NULL || vect->capacity == 0) {
        vect->v = calloc(INIT_VECTOR_CAPACITY, sizeof(int));
        if(vect->v == NULL) return ERROR_MEMORY_PROBLEM;
        vect->capacity = INIT_VECTOR_CAPACITY;
        vect->len = 0;
    }
    return SUCCESS_RETURN;
}

int fillZeroVectInt(struct VectInt *vect) {
    int erCode;
    if(isNullorEmptyVectInt(vect))
        if((erCode = initVectInt(vect)) != SUCCESS_RETURN)
            return erCode;
    for(unsigned int i = 0; i < vect->len; i++)
        *(vect->v + i) = 0;
}

// Put element into vector
// return 1 if successfull and 0 else
int putVectInt(struct VectInt *vect, int val) {
    int erCode;
    if(isNullorEmptyVectInt(vect)) 
        if((erCode=initVectInt(vect)) != SUCCESS_RETURN)
            return erCode;
    if(vect->len >= vect->capacity)
        extendVectInt(vect);
    *(vect->v + (vect->len)++) = val;
}

int isNullorEmptyVectInt(struct VectInt *vect) {
    if(vect == NULL || vect->v == NULL || vect->capacity == 0)
        return 1;
    return 0;
}

int extendVectInt(struct VectInt *vect) {
    int erCode;
    if(isNullorEmptyVectInt(vect)) 
        if((erCode = initVectInt(vect)) != SUCCESS_RETURN) 
            return erCode;
    return extendValVectInt(vect, vect->capacity<<1);
}

int extendValVectInt(struct VectInt *vect, unsigned int addCapacityValue) {
    int erCode;
    if(isNullorEmptyVectInt(vect)) 
        if((erCode = initVectInt(vect)) != SUCCESS_RETURN)
            return erCode;

    vect->capacity += addCapacityValue;
    int *vv = calloc(vect->capacity, sizeof(int));
    if(vv == NULL) return ERROR_MEMORY_PROBLEM;

    for(unsigned int i = 0; i < vect->len; i++)
        *(vv + i) = *(vect->v + i);

    free(vect->v);
    vect->v = vv;
}

void printVectInt(struct VectInt *vect) {
    if(isNullorEmptyVectInt(vect))
        return ;
    printf("VectorInt: [");
    for(unsigned int i = 0; i < vect->len; i++)
        printf("%d ", *(vect->v + i));
    printf("]\n");
}
