#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, x3, y3, p1, p2, diss;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    x3 = x2 - x1;
    y3 = y2 - y1;

    p1 = pow(x3, 2);
    p2 = pow(y3, 2);

    diss = p1 + p2;
    diss = pow(diss, 0.5);


    printf("%.4lf\n", diss);


}
