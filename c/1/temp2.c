#include<stdio.h>
int main()
{
    int f;
    for(f = 0; f <= 300;f =  f + 20)
    {
        printf("%3d %12.3f\n", f, 5.0/9*(f-32));
    }
    printf("\n\n");
    for(f = 300; f >= 0;f =  f - 20)
    {
        printf("%3d %12.3f\n", f, 5.0/9*(f-32));
    }
}