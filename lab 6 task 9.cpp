#include<stdio.h>
#include<math.h>
int main(){
    int people;
    double cost, total;
    printf("Enter number of people");
    scanf("%d", &people);

    cost = 250.50 * people;
    total = ceil(cost);
    printf("Total cost (rounded up) = %0lf\n", total);

    return 0;
}
