#include<stdio.h>
#define M 1000
int getline(char line[],  int);
void copy(char to[], char from[]);
int main()
{
    int len, max;
    char line[M], longest[M];
    max = 0;

    while((len = getline(line, M))>0)
    {
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if(max>0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int lim)
{
    int c,i;
    for(i = 0; i < lim - 1 && (c = getchar())!=EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n')
        {
            s[i] = c;
            i++;
        }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while((to [i] = from[i]) != '\0')
        i++;
}