#include<stdio.h>

int main(){
    int amount, coins = 0;
    printf("Enter amount in cents");
    scanf("%d", &amount);

    while(amount > 0){
        if(amount >= 25)
            amount -= 25;
        else if(amount >= 10)
            amount -= 10;
        else if(amount >= 5)
            amount -= 5;
        else
            amount -= 1;
        coins++;
    }

    printf("Minimum number of coins needed = %d\n", coins);

    return 0;
}
