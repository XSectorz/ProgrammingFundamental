#include <stdio.h>

int main() {

    printf("Data in array: ");

    int input;
    int index = 1;

    int even = 0;
    int odd = 0;

    for(int i = 0 ; i < 10 ; i++) {
        scanf("%d",&input);
        
        if(input%2 == 0) {
            even += index;
        } else {
            odd += index;
        }
        index++;
    }

    printf("Result: %d",odd-even);
}