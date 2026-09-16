#include <stdio.h>

int main(){

    int num1 = 0, num2 = 0;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("The first number = %d\n", num1);
    printf("The second number = %d", num2);


    return 0;
}