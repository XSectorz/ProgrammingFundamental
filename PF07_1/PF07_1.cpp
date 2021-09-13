#include <stdio.h>
#include <string.h>

int main() {

    char input[100];
    scanf("%[^\n]s",input);

    printf("%c",input[strlen(input)-1]);

}