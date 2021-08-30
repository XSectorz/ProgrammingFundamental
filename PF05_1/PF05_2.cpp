#include <stdio.h>
#include <string.h>

int main() {

    char ch = ' ';
    char ans[1000];
    int index = 0;

    do {
        scanf("%c",&ch);
        if(ch != '\n') {
            if(ch == 'a') {
                ch  = '0';
            } else if(ch  == 'e') {
                ch  = '1';
            } else if(ch  == 'i') {
                ch  = '2';
            } else if(ch  == 'o') {
                ch  = '3';
            } else if(ch  == 'u') {
                ch  = '4';
            }
            ans[index] = ch;
            index++;
        }
    } while(ch != '\n');

    for(int i = index ; i >= 0 ; i--) {
        printf("%c",ans[i]);
    }
    printf("aca");

}