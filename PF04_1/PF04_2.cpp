#include <stdio.h>
#include <string.h>

int main() {

    int sum = 0;
    int sum_t = 0;

    while(1) {

        char input;
        scanf_s("%c",&input);

        if(input == '\0' || input == '\n') {
            if(sum_t != 0) {
                sum = sum + sum_t;
            }
            break;
        }

        if(input >= 48 && input <= 57) {
            sum_t = (sum_t*10) + (input-48);
        } else {
            sum = sum + sum_t;
            sum_t = 0;
        }
    }

    printf("%04d",sum);

}