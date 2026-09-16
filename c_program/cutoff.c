#include <stdio.h>

int main(){

    int M, P, C, E, cm;
    printf("Enter  your marks in maths: ");
    scanf("%d", &M);

    printf("Enter  your marks in Physics: ");
    scanf("%d", &P);

    printf("Enter  your marks in chemistry: ");
    scanf("%d", &C);

    printf("Enter  your marks in Entrance: ");
    scanf("%d", &E);

    cm = (M + P + C ) / 2 + E;

    printf("Cutoff mark = %d", cm);
    

    return 0;
}