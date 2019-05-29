#include <stdio.h>

int main(void) {
	
	int lowerCase,upperCase;
	 char c;
	 
	 printf("Enter a Letter");
	 scanf("%c",&c);
	 
	 lowerCase-(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' );
	 upperCase=(c=='A'|| c=='E'|| c=='I'|| c=='O'||c=='U');
	 
	 if(lowerCase||upperCase)
	 printf("The give letter is vowel");
	 else
	 printf("Its Consonant")
	
	return 0;
}
