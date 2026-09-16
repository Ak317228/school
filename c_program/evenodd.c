#include <stdio.h>
#include <stdbool.h>

int main(){

    bool flag = true;
    int num;
    while(flag){
        char ch = '\0';
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("The number is even");} 
        else{
            printf("number is odd");}

        printf("\nDo you want to continue(y/n): ");
        scanf(" %c", &ch);

        if(ch != 'y' && ch != 'Y'){
            break;
        }
        
    }


    return 0;
}