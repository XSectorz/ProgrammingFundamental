#include <stdio.h>

int main() {

    int input;
    int index = 0;
    int data[1000];
    bool answer = true;

    while(1) {
        printf("Number : ");
        scanf("%d",&input);

        if(input == 999) {
            break;
        }

        data[index] = input;
        index++;
    }

    int Data_case = 0; //1 = Negative -> Positive, 2 = Positive -> Negative

    if(data[0] < data[1]) {
        Data_case = 1;
    } else if(data[0] > data[1]) {
        Data_case = 2;
    }
    
    if(Data_case == 0) {
        answer = false;
    }

    for(int i = 2 ; i < index ; i++) {
        if(Data_case == 0) {
            answer = false;
            break;
        } else if(Data_case == 1) {
            if(data[i] < data[i-1]) {
                answer = false;
                break;
            }
        } else if(Data_case == 2) {
            if(data[i] > data[i-1]) {
                answer = false;
                break;
            }
        }
    }

    printf("Is sort : ");

    if(answer) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}