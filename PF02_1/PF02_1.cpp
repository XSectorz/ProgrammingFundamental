#include <stdio.h>

int main() {

    int input;
    scanf_s("%d",&input);

    int blank = (input*2)-1;
    int Removal = 0;
    int temp_i = 0;
    int isPassMid = 0;

    for(int i = 0 ; i < (input*2)-1 ; i++) {
        for(int j = 0 ; j <= temp_i ; j++) {
            printf("*");
        }
        for(int j = 0 ; j < blank-2 ; j++) {
            printf(" ");
        }

        if(i == input-1) {
            Removal = 1;
        }

        for(int j = 0 ; j <= temp_i-Removal ; j++) {
            printf("*");
        }

        printf("\n");
        if(i == input-1) {
            temp_i = input - 2;
            Removal = 0;
            isPassMid = 1;
            blank = 3;
            continue;
        }

        if(isPassMid == 1) {
            temp_i--;
            blank+=2;
        } else {
            temp_i++;
            blank-=2;
        }
    }

    return 0;
}