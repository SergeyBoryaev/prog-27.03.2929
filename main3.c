#include "h3.h"
#include "stdio.h"

int main()
{
    char str[10];
    STACK *s = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &str[i]);
        s = Push(s, str[i]);
    }
    char obratStr[10];
    for (int i = 0; i < 10; i++)
    {
        obratStr[i] = s->value;
        s = Pop(s);
    }
    printf("%s\n", obratStr);
    return 0;
}