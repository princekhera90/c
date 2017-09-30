#include<stdio.h>
int main()
{
    long c = 0;
    for(c = 0; getchar() != EOF;c++)
    ;
    printf("%ld\n",c);
}