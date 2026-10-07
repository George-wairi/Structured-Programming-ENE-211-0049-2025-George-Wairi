#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area;
    const double pi=3.142;
    double r;
    printf("Please enter the radius\n");
    scanf("%lf", &r);
    area= 4*pi*r*r;
    printf("the area, %lf", area);
    return 0;
}
