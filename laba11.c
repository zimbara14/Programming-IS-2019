#include<stdio.h>
#include<math.h>
#include "functions.txt"

#define n 2

typedef struct triangle{
    double AB;
    double BC;
    double AC;
    double P;
    double p;
    double S;
    double A[n];
    double B[n];
    double C[n];
};

int main(){

    struct triangle s1;
    printf("Enter two coordinates of the vertex A -> ");
    scanf("%lf %lf", &s1.A[0], &s1.A[1]);
    printf("Enter two coordinates of the vertex B -> ");
    scanf("%lf %lf", &s1.B[0], &s1.B[1]);
    printf("Enter two coordinates of the vertex C -> ");
    scanf("%lf %lf", &s1.C[0], &s1.C[1]);

    s1.AB = side_length(s1.A[0], s1.A[1], s1.B[0], s1.B[1]);
    s1.BC = side_length(s1.B[0], s1.B[1], s1.C[0], s1.C[1]);
    s1.AC = side_length(s1.A[0], s1.A[1], s1.C[0], s1.C[1]);
    s1.P = perimetr(s1.AB, s1.AC, s1.BC);
    s1.p = small_perimetr(s1.P);
    s1.S = plosad(s1.p, s1.AB, s1.BC, s1.AC);
    printf("The perimetr is %.2lf\n", s1.P);
    printf("The plosad is %.2lf\n", s1.S);

    return 0;
}
