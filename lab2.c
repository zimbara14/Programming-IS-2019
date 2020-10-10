#include<stdio.h>
#include<math.h>

int main()
{
    float z1, z2;
    int b;

    printf("enter an integer\n");
    scanf("%d", &b);

    z1 = (sqrt(2*b + 2 * sqrt(b * b - 4))) * (1 / (sqrt (b * b - 4) + b + 2) );
    z2 = 1 / (sqrt (b + 2));

    printf("z1 = %f", z1);
    printf("\nz2 = %f", z2);

    return 0;
}
