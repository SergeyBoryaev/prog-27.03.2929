#include "h2.h"
#include "stdio.h"

int main()
{
    int size;
    scanf("%d", &size);
    char *str = calloc(size + 1, sizeof(char));
    scanf("%s", str);
    STACK *s = 0;
    for (int i = 0; i < size; i++)
        s = Push(s, str[i]);
    int half = size / 2;
    if (!(size % 2))
        half--;
    for(int i=0;i<=half;i++)
    {
        if(str[i] != s->value)
        {
            printf("Not a polenom\n");
            return 0;
        }
        s = Pop(s);
    }
    printf("Polenom\n");
    return 0;
}