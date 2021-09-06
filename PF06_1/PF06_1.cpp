#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    bool isEven = true;

    if(n >= 0) {
        for(int i = 0 ; i < n ; i++) {
            isEven = !isEven;
        } 
    } else {
        for(int i = -1 ; i >= n ; i--) {
            isEven = !isEven;
        } 
    }

    printf("%d is ",n);
    if(isEven) {
        printf("Even");
    } else {
        printf("Odd");
    }

}