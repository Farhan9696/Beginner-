#include <stdio.h>

int main(void) {
	
	int i,n,num,l=0;
	printf("Total nmber to be listed");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("/n/n%d",i+1);
		scanf("%d",&num);
		
		if(num>l)
		l=num;
		
	}
	printf("/n the largest %d",l);
	return 0;
}
