#include "h4.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        puts("Wrong command format");
        return -1;
    }
    FILE *fr = fopen(argv[1], "rt");
    if (!fr)
    {
        puts("Error open file for reading");
        return -2;
    }
    FILE *fw = fopen(argv[2], "wt");
    if (!fw)
    {
        puts("Error open first file for writing");
        return -3;
    }
    char text[100][100] = {'\0'};
    int size = DocRead(fr, text);
    STACK *s = 0;
    for (int i = 0; i < size; i++)
        s = Push(s, text[i]);
    for (int i = 0; i < size; i++)
    {
        strcpy(text[i], s->value);
        s = Pop(s);
    }
    DocWrite(fw, text, size);
    return 0;
}