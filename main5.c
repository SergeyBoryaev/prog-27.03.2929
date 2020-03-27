#include "h5.h"
#include "stdio.h"

int main()
{
    int size;
    scanf("%d", &size);
    char *str = calloc(size + 1, sizeof(char));
    scanf("%s", str);
    STACK *s = 0;
    for (int i = 0; i < size; i++)
    {
        if(IsEmpty(s) || str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s = Push(s,str[i]);
            continue;
        }
        else if((s->value == '(' && str[i] == ')') || (s->value == '[' && str[i] == ']') || (s->value == '{' && str[i] == '}') )
        {
            s = Pop(s);
            continue;
        }
        else
        {
            printf("Not right.\n");
            return 0;
        }
        
    }
    if(IsEmpty(s))
        printf("All right.\n");
    else
    {
        printf("Not right.\n");
    }
    
    return 0;
}