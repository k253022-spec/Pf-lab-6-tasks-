#include<stdio.h>

int main(){
    int n, i;
    long long factorial = 1;
    printf("Enter number of participants");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Total arrangements = %lld\n", factorial);

    return 0;
}
