#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char data[10000];
    scanf("%s",&data);

    char temp_arr[100];
    int index_t = 0;
    int sum = 0;

    for(int i = 0 ; i  < strlen(data) ; i++) {
        if(data[i] >= 48 && data[i] <= 57) {
            temp_arr[index_t] = data[i];
            index_t++;
            if(i+1 == strlen(data)) {
                int sum_t = atoi(temp_arr);
                sum = sum+sum_t;
            }
        } else {
            if(index_t == 0) { //array empty
                continue;
            }
            int sum_t = atoi(temp_arr);
            sum = sum+sum_t;
            memset(temp_arr, 0, index_t);
            index_t = 0;

        }
    }

    printf("%04d",sum);

}