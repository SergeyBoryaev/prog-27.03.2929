#include "h1.h"
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
    while (!IsEmpty(s))
    {
        printf("%c", s->value);
        s = Pop(s);
    }
    printf("\n");
    return 0;
}