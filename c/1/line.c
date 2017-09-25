#include<stdio.h>
int main()
{
    int c, l = 0, b = 0, t = 0;
    while((c = getchar())!=EOF)
    {
        if(c=='\n') // \n = 10 in ascii.
            l++;
        if(c=='\t')
            t++;
        if(c==' ')
            b++;
    }
    printf("l = %d  t = %d  b = %d",l,t,b);
}