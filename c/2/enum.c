#include<stdio.h>
int main()
{
    enum month {jan = 1, feb, march, april, may, june, july, aug, sep, oct, nov, dec};
    enum month january = jan;
    printf("%d %d\n", january, feb);
}
//enum sets constant values to list of symbols in increasing order
// default = 0