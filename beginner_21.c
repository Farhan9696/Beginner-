#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int first, diff, terms, value, sum=0, i;
 
 
 
 
    
    scanf("%d %d %d",&terms, &first, &diff);
 
    /* print the series and add all elements to sum */
    value = first;
    
    for(i = 0; i < terms; i++) {
        
        sum += value;
        value = value + diff;
    }
 
    printf("%d",sum);
 
    
 return 0;
}
