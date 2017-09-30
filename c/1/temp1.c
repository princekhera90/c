#include<stdio.h>
int main()
{
    int l = 0, u = 300, s = 20;
    float f, c = l;
    while(c <= u)
    {
        f = 5.0/9*c + 32;
        printf("%3.0f %12.3f\n" , c,f);
        c = c + s;
    }
}