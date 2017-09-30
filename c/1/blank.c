#include<stdio.h>
int main()
{
    int c, n = 0;
    while((c = getchar())!=EOF)
    {
        if(c==' ' && n == 1)
        {
            n = 0;
            putchar(c);
        }
        else if(c == ' ' && n == 0)
            continue;
        else
        {
            putchar(c);
            n = 1;
        }
    }
}