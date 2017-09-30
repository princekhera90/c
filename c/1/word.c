#include<stdio.h>
#define in 1
#define out 0
int main()
{
    int c, nl, nw, nc, state;
    nl = nw = nc = state = out;
    while((c = getchar())!= EOF)
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(state == out)
        {
            state = in;
            ++nw;
        }
        if(c == '\n' || c == '\t' || c == ' ')
            state = out;
    }
    printf("%d %d %d", nl,nw,nc);
}