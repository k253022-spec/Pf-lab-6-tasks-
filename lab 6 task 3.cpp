#include<stdio.h>

int main(){
    int balance = 50000;
    int withdraw;
    printf("Your starting balance is %d\n", balance);

    while(balance > 0){
        printf("Enter amount to withdraw");
        scanf("%d", &withdraw);

        if(withdraw > balance){
            printf("Insufficient balance! You have only %d\n", balance);
        } 
        else if(withdraw <= 0){
            printf("Invalid amount! Enter a positive value.\n");
        }
        else {
            balance -= withdraw;
            printf("Withdrawal successful Remaining balance %d\n", balance);
        }

        if(balance == 0){
            printf("Your account balance is now zero.\n");
        }
    }
    printf("Thank you for using our ATM\n");

    return 0;
}
