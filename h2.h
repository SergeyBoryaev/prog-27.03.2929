#ifndef H2_H
#define H2_H

#include "stdlib.h"

typedef struct h2
{
    char value;
    struct h2 *pnext;
} STACK;

STACK *Push(STACK *phead, char v);

STACK *Pop(STACK *phead);

int IsEmpty(STACK *phead);

#endif