#include "h4.h"

STACK *Push(STACK *phead, char* v)
{
    STACK *pnew = calloc(1, sizeof(STACK));
    pnew->pnext = phead;
    pnew->value = calloc(strlen(v)+1, sizeof(char));
    strcpy(pnew->value, v);
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

int DocRead(FILE *fr, char text[][100])
{
    int i = 0;
    while (!feof(fr))
    {
        int length;
        char str[100] = {'\0'};

        fgets(str, 100, fr);
        if (str[strlen(str) - 1] == '\n')
            length = strlen(str) - 1;
        else
            length = strlen(str);

        for (int j = 0; j < length; j++)
            text[i][j] = str[j];
        i++;
    }
    return i;
}

void DocWrite(FILE *fw, char text[][100], int size)
{
    for (int i = 0; i < size; i++)
    {
        fputs(text[i], fw);
        fputc('\n', fw);
    }
    return;
}