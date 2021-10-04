#include <stdio.h>

int result;

void recursive(int index,int array[]) {

    if(index < 0) {
        return;
    } else {
        recursive(index-1,array);
        if(array[index]%2 == 0) {
            result -= index;
        } else {
            result += index;
        }
    }

}

int main() {

    int data[10];

    printf("Data in array: ");

    for(int i = 0 ; i < 10 ; i++) {
        scanf("%d",&data[i]);
    }

    recursive(9,data);
    printf("Result: %d",result);

}