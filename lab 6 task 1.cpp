#include<stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a number (0 to stop) ");
    scanf("%d", &num);
    while(num != 0) {
        sum += num;
        printf("Current sum = %d\n", sum);
        printf("Enter a number (0 to stop) ");
        scanf("%d", &num);
    }
    printf("Final sum = %d\n", sum);
    printf("Program ended");

    return 0;
}
