#include <stdio.h>
#include <math.h>


// Z1 and Z2

float Z1(int a)
{
    return (cos(a) + sin(a) + cos(3*a) + sin(3*a));
}

float Z2(int a)
{
    double Pi;
    Pi = 3.14;
    return (2 * sqrt(2) * cos(a) * sin((Pi/4) + (2*a)));
}

int main()
{

    int a;
    scanf("%d", &a);

    printf("Z1 = %.2f\n", Z1(a));
    printf("Z2 = %.2f\n", Z2(a));

    return 0;
}
