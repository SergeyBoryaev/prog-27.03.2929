#include "h5.h"

STACK *Push(STACK *phead, char v)
{
    STACK *pnew = calloc(1, sizeof(STACK));
    pnew->pnext = phead;
    pnew->value = v;
    return pnew;
}

STACK *Pop(STACK *phead)
{
    STACK *pnew = phead->pnext;
    free(phead);
    return pnew;
}

int IsEmpty(STACK *phead)
{
    if(phead)
        return 0;
    return 1;
}