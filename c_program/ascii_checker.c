#include <stdio.h>
#include <stdbool.h>

int main(){
    bool flag = true;
    while(flag){
        char ch = '\0', choice = '\0';
        printf("Enter a character: ");
        scanf(" %c", &ch);

        printf("The ASCII code of %c is %d\n", ch, ch);
        printf("Do you want to continue(y/n): ");
        scanf(" %c", &choice);

        if(choice != 'y' && choice != 'Y'){
            break;
        } 
    }
    return 0;
}