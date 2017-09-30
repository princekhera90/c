#include<stdio.h>
int main()
{
    int c, i, arr[100], w = 0, s = 0, l = 0;
    for(i = 0; i < 100; i++)
    {
        arr[i] = 0;
    }
    i = 0;
    while((c = getchar())!=EOF)
    {
        if(c == ' ' && s == 0)
        {
            if(l < arr[w])
                l = arr[w];
            w++;
            s = 1;
        }
        else if(c == ' ' && s == 1)
            continue;
        else if(c == '\n')
        {
            if(l < arr[w])
                l = arr[w];
            w++;
            int t = l;
            for(i = 0; i < l; i++)
            {
                for(int j = 0; j < w;j++)
                {
                    if(arr[j] < t)
                    {
                        printf("  ");
                    }
                    else
                        printf("* ");
                }
                printf("\n");
                t--;
            }
            for(i = 0; i < w; i++)
                arr[i] = 0;
            w = 0;
            t = l = 0;
        }
        else
        {
            s = 0;
            ++arr[w];
        }
    }
}