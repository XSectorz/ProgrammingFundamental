#include <stdio.h>

int main() {

    int time;
    scanf("%d",&time);

    int hour = time/3600;
    int minutes = (time-(3600*hour))/60;
    int seconds = (time-(3600*hour)-(60*minutes));

    printf("%d:%02d:%02d",hour,minutes,seconds);
}