#include <stdio.h>
#include <math.h>
int main(){
    double I, S, M;
    printf("Enter intensity (I)");
    scanf("%lf", &I);
    printf("Enter standard reference value (S)");
    scanf("%lf", &S);
    M = log10(I / S);
    printf("Earthquake Magnitude = %2lf\n", M);

    return 0;
}
