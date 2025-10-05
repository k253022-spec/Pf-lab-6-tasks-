#include<stdio.h>
#include<math.h>

int main(){
    double P, r, n, t, A;
    printf("Enter principal amount (P)");
    scanf("%lf", &P);
    printf("Enter annual interest rate (r)");
    scanf("%lf", &r);
    printf("Enter number of times interest applied per year (n)");
    scanf("%lf", &n);
    printf("Enter number of years (t)");
    scanf("%lf", &t);
    A = P * pow((1 + r / n), n * t);
    printf("Future value of investment = %2lf\n", A);

    return 0;
}
