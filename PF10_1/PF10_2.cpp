#include <stdio.h>

int main() {

    int time;
    scanf("%d",&time);

    int hour = 0;
    int minutes = 0;
    int sec = 0;

    while(time > 0) {

        sec++;
        if(sec >= 60) {
            minutes++;
            sec = 0;
        }
        if(minutes >= 60) {
            minutes = 0;
            hour++;
        }
        time--;
    }
    printf("%d:%02d:%02d",hour,minutes,sec);
    

}