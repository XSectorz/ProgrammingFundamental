#include <stdio.h>
 
int main()
{
    int input;
    scanf("%d",&input);

    for(int i = 0 ; i < input ; i++) {
        printf("*");
    }
    printf("\n");

    for(int i = 0 ; i < input-2 ; i++) {
        printf("*");
        for(int j = 0 ; j < input-2 ; j++) {
            printf(" ");
        }
        printf("*\n");
    }

     for(int i = 0 ; i < input ; i++) {
        printf("*");
    }
    printf("\n");


    return 0;
}
