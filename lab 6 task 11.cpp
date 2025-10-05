#include<stdio.h>
#include<math.h>

int main(){
    double H,theta, L;
    printf("Enter height of building (H)");
    scanf("%lf", &H);
    printf("Enter angle of elevation (in radians)");
    scanf("%lf", &theta);
    L = H / tan(theta);
    printf("Length of shadow = %2lf\n", L);

    return 0;
}
