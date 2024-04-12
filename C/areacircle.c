#include <stdio.h>

int main(){

    double pi, raio;
    pi = 3.14159;
    
    scanf("%lf", &raio);

    double area;

    area = raio * pi * raio;

    printf("A=%.4lf\n", area);


    return 0;
}
