#include <stdio.h>

int main(){
    
    int s1, s2, s3, s4, s5;
    int tot = 0;
    float avg = 0;
    
    printf("Enter the marks of subject 1: ");
    scanf("%d", &s1);

    printf("Enter the marks of subject 2: ");
    scanf("%d", &s2);

    printf("Enter the marks of subject 3: ");
    scanf("%d", &s3);
    
    printf("Enter the marks of subject 4: ");
    scanf("%d", &s4);

    printf("Enter the marks of subject 5: ");
    scanf("%d", &s5);

    tot = s1 + s2 + s3 + s4 + s5;
    avg = tot / 5;

    printf("The total = %d\n", tot);
    printf("The average = %.2f", avg);

    return 0;
}
