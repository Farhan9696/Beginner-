#include <stdio.h>

int main() {
	
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if (num>0)
	printf("its positive");
	else if (num<0)
	printf("its negative");
	else if (num==0)
	printf("its zero");
	
	return 0;
}
