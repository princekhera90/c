#include<stdio.h>
int main()
{
    int l, u, step;
    float fahr;
    float c;
    l = 0;
    u = 300;
    step = 20;
    fahr = l;
    printf("Heading\n");
    while(fahr<=u)
    {
        c = 5.0/9*(fahr - 32);
        printf("%3.0f %12.3f\n", fahr,c);
        fahr = fahr + 20;
    }
}