#include <stdio.h>
#include <string.h>

int main() {

    char number[100];
    scanf("%s",number);
    bool isEven = false;
    char EvenType[5] = {'0','2','4','6','8'};

    for(int i = 0 ; i < 5 ; i++) {
        if(number[strlen(number)-1] == EvenType[i]) {
            isEven = true;
            break;
        }
    }

    printf("%s is ",number);
    if(isEven) {
        printf("Even");
    } else {
        printf("Odd");
    }

}