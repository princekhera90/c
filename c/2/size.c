#include<stdio.h>
int main()
{
    printf("int = %lu\nchar = %lu\nlong = %lu\nfloat = %lu\ndouble = %lu\nunsigned = %lu\nsigned = %lu\nshort = %lu\n", sizeof(int), sizeof(char),sizeof(long int),sizeof(float), sizeof(double), sizeof(unsigned int), sizeof(signed int), sizeof(short int));
}
//sizeof returns unsigned long
//placeholder for unsigned long is %lu