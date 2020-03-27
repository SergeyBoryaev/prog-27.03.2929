#ifndef H5_H
#define H5_H

#include "stdlib.h"

typedef struct h5
{
    char value;
    struct h5 *pnext;
} STACK;

STACK *Push(STACK *phead, char v);

STACK *Pop(STACK *phead);

int IsEmpty(STACK *phead);

#endif