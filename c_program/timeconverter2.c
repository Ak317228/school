#include <stdio.h>

int main(){

    int hours, minutes, seconds, total_seconds;
    printf("Enter Hours, minutes, and seconds: ");
    scanf("%d, %d, %d", &hours, &minutes, &seconds);

    total_seconds = (hours * 3600) + (minutes * 60) + seconds;
    printf("Time in seconds = %d", total_seconds);

    return 0;
}