#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int ch;
    ch = getchar();
    while(ch != '\n')
    {
        putchar(ch);
        ch = getchar();
        putchar('\n');
    }
    
}