#include<stdio.h>

int main(){

    int number1, number2, number3;
    printf("Enter phone number [(999)999-9999] :\n");
    scanf("%d%d%d", &number1, &number2, &number3);
    printf("You entered %d-%d-%d\n", number1,number2,number3);

    return 0;

}
