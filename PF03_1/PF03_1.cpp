#include <stdio.h>

int main() {
    
    int input;

    bool isStart = false;
    int Data_case = 0; //1 = Negative -> Positive, 2 = Positive -> Negative
    int temp;
    bool answer = true;
    do {

        printf("Number : ");
        scanf("%d",&input);

        if(input == 999) {
            break;
        }

        if(isStart) {
            if(temp < input) {
                if(Data_case == 0) {
                    Data_case = 1;
                } else if(Data_case == 2) {
                    answer = false;
                }
            } else if(temp > input){
                if(Data_case == 0) {
                    Data_case = 2;
                } else if(Data_case == 1) {
                    answer = false;
                }
            }
        }
        temp = input;
        isStart = true;

    } while(input != 999);

    if(Data_case == 0) {
        answer = false;
    }

    printf("Is sort : ");

    if(answer) {
        printf("YES");
    } else {
        printf("NO");
    }

}