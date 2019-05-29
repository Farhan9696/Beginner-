#include <stdio.h>
 
int main(void) {
 
int year;
printf("Enter the Year");
scanf("%d",&year);
 
if (year%4==0)
printf("It is Leap year");
else
printf("It is not a Leap Year");
 
 
	return 0;
}
