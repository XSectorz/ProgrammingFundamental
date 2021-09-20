#include <stdio.h>
#include <string.h>

int main() {

    char input[1000];
    scanf("%[^\n]s",input);

    int counter = 0;

    for(int i = 0 ; i < strlen(input)-3 ; i++) {
        if(input[i] == 'F' || input[i] == 'f') {
            if(input[i+1] == 'R' || input[i+1] == 'r') {
                if(input[i+2] == 'O' || input[i+2] == 'o') {
                    if(input[i+3] == 'G' || input[i+3] == 'g') {
                        counter++;
                    }
                }
            }
        }
    }

    printf("%d",counter);

}