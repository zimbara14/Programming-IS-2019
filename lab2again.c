#include<stdio.h>
#include<math.h>

int main()
{
    int z2;
    float z1, b, pi;

    pi = 3,14;

    scanf("%d", b);

    z1 = (sqrt(2*b + 2 * sqrt(b * b - 4))) / (1 / (sqrt (b * b - 4) + b + 2) );

    printf("\n this is the result");
    printf("%f", z1);

    return 0;
}
