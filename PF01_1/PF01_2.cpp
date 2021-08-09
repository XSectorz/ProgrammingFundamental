#include <stdio.h>
 
int main()
{
	int input;
	scanf("%d",&input);
	
	for(int i = 0 ; i < input ; i++) {
		if(i == 0 || i == input-1) {
			for(int j = 0 ; j < input ; j++) {
				printf("*");
			}
			printf("\n"); 
			continue;
		}
		
		printf("*");
		for(int j = 0 ; j < input-2 ; j++) {
			printf(" ");
		}
		printf("*\n");
	}
}
