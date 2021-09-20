#include <stdio.h>
#include <string.h>

int main() {

    char input[1000];
    scanf("%[^\n]s",input);

    int array_ascii[] = {70,82,79,71};
    int index = 0;

    int counter = 0;
    for(int i = 0 ; i < strlen(input)-3 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            if(input[i+j] == array_ascii[index] || input[i+j] == (array_ascii[index]+32)) {
                index++;
            } else {
                index = 0;
            }

            if(index == 4) { //same
                counter++;
                i+=3;
            }
        }
        index = 0;
    }

    printf("%d",counter);

}