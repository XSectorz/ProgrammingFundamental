#include <stdio.h>

int main() {

    int input;
    scanf("%d",&input);

    int blank = (input*2)-1;

    for(int i = 0 ; i < input-1 ; i++) {
        for(int j = 0 ; j <= i ; j++) {
            printf("*");
        }
        for(int j = 0 ; j < blank-2 ; j++) {
            printf(" ");
        }
        for(int j = 0 ; j <= i ; j++) {
            printf("*");
        }
        printf("\n");
        blank-=2;
    }
    for(int i = 0 ; i < (input*2)-1 ; i++) {
        printf("*");
    }
    printf("\n");
    blank = 1;
    int remove = 2;
    for(int i = 0 ; i < input-1 ; i++) {
        for(int j = input-remove ; j >= 0 ; j-- ) {
            printf("*");
        }
        for(int j = 0 ; j < blank ; j++) {
            printf(" ");
        }
        for(int j = input-remove ; j >= 0 ; j-- ) {
            printf("*");
        }
        printf("\n");
        blank+=2;
        remove++;
    }

    return 0;
}