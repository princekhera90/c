#include<stdio.h>
int main()
{
    int c, i, arr[100], w = 0, s = 0;
    for(i = 0; i < 100; i++)
    {
        arr[i] = 0;
    }
    i = 0;
    while((c = getchar())!=EOF)
    {
        if(c == ' ' && s == 0)
        {
            w++;
            s = 1;
        }
        else if(c == ' ' && s == 1)
            continue;
        else if(c == '\n')
        {
            w++;
            for(int j = 0; j < w; j++)
            {
                for(int k = 0; k < arr[j]; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            for( i = 0; i < w; i++)
                arr[i] = 0 ;
            w = 0;
        }
        else
        {
            s = 0;
            ++arr[w];
        }
    }
}