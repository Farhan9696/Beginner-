#include <stdio.h>
 
int main(void) {
	int num;
 
	printf("Enter a number");
	scanf("%d",&num);
 
	if (num%2==0)
	printf("Even");
	else 
	printf("odd");
 
	return 0;
}
