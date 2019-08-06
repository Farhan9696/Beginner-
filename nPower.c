#include<stdio.h> // include stdio.h library
 
int main(void)
{       
    int base, exponent, result = 1;
    
    scanf("%d%d", &base,&exponent);
    
    int i = 1;
    
    while(i <= exponent)
    {
        result *= base;
        i++;
    }
    
    printf("%d", result);
    
    return 0; 
}
