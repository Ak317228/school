#include <stdio.h>

int main(){
    
    int sec = 31558150;
    int days, hours, minutes;

    days = sec / 86400;
    sec %= 86400;
    
    hours = sec / 3600;
    sec %= 3600;

    minutes = sec / 60;
    sec %= 60;

    printf("Earth's revolution period: %d days, %d hours, %d minutes, %d seconds", days, hours, minutes, sec);

    return 0;
}