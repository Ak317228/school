#include <stdio.h>

int main()
{

    int s1, s2, s3, s4, s5, total;
    float percentage;

    printf("Enter the first subject marks");
    scanf("%d", &s1);

    printf("Enter the second subject marks");
    scanf("%d", &s2);

    printf("Enter the third subject marks");
    scanf("%d", &s3);

    printf("Enter the fourth subject marks");
    scanf("%d", &s4);

    printf("Enter the fifth subject marks");
    scanf("%d", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500.0) * 100.0;

    if (percentage > 90.0)
    {
        printf("A");
    }
    else if (percentage > 80.0)
    {
        printf("B");
    }
    else if (percentage > 70.0)
    {
        printf("C");
    }
    else if (percentage > 60.0)
    {
        printf("D");
    }

    return 0;
}