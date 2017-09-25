#include<stdio.h>
int main()
{
    long c = 0;
    while(getchar() != EOF)
        c++;
    printf("%ld\n", c);
}