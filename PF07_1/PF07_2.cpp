#include <stdio.h>

int main() {
    char input;
    char temp;
    do {

        scanf("%c",&input);
        
        if(input == '\n')  {
            printf("%c",temp);
        } else {
            temp = input;
        }

    } while(input != '\n');



}