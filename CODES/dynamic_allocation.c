#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=24, num2=6 , res, *ptr;

    ptr = malloc(4* sizeof(int));
    res = num1+num2;
    printf("The result is %d", res) ;
    
}