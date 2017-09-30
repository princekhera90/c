#include<stdio.h>
int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            continue;
        else
        {
            putchar(c);
            putchar('\n');
        }
    }

}