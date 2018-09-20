// Licence GNU GPL v2
// Copyright (C) Khudyashev Ivan, 2018, bahek1983@gmail.com
#ifndef _EX_1_13_EXTLIB_H
#define _EX_1_13_EXTLIB_H 1
struct VectInt {
    int *v;
    unsigned int len;
    unsigned int capacity;
};
int initVectInt(struct VectInt*);
int fillZeroVectInt(struct VectInt*);
int putVectInt(struct VectInt*, int);
int isNullorEmptyVectInt(struct VectInt*);
int extendVectInt(struct VectInt*);
int extendValVectInt(struct VectInt*, unsigned int);
void printVectInt(struct VectInt*);
#endif
