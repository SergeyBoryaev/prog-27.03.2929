#ifndef H1_H
#define H1_H

#include "stdlib.h"

typedef struct h1
{
    char value;
    struct h1 *pnext;
} STACK;

STACK *Push(STACK *phead, char v);

STACK *Pop(STACK *phead);

int IsEmpty(STACK *phead);

#endif