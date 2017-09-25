#include<stdio.h>
int main()
{
    int c,i,nw,no;
    int arr[10];
    nw = no = 0;
    for(i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
    while((c = getchar())!=EOF)
    {
        if( c >= '0' && c <= '9')
            ++arr[c - '0'];
        else if(c==' ' || c == '\t' || c == '\n')
            ++nw;
        else
            ++no;
    }
    for(i = 0; i < 10; i++)
        printf("%d", arr[i]);
    printf(" %d %d\n", nw, no);
}