#ifndef H4_H
#define H4_H

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

typedef struct h4
{
    char* value;
    struct h4 *pnext;
} STACK;

STACK *Push(STACK *phead, char* v);

STACK *Pop(STACK *phead);

int IsEmpty(STACK *phead);

int DocRead(FILE *fr, char text[][100]);

void DocWrite(FILE *fw, char text[][100], int size);

#endif