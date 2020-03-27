#ifndef H3_H
#define H3_H

#include "stdlib.h"

typedef struct h3
{
    char value;
    struct h3 *pnext;
} STACK;

STACK *Push(STACK *phead, char v);

STACK *Pop(STACK *phead);

int IsEmpty(STACK *phead);

#endif