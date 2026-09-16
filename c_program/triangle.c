#include <stdio.h>

int main(){
    float height, base, area;
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    printf("Enter the length of base of the triangle: ");
    scanf("%f", &base);

    area = 0.5 * base * height;
    printf("The area = %0.2f", area);

    return 0;

}