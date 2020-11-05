#include<stdio.h>

int main() {

    int n = 9;
    int arr[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};

    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("-------------------------------------------------");

    int r1 = 2, c1 = 2, r2 = 2, c2 = 2, i, j, p, m, q;

    int matr1[2][2] = {2, 5, 2, 2};
    int matr2[2][2] = {1, 2, 0, 1};
    int matr3[2][2] = {};

    printf("\nElements from the first matrix:");
    for(i = 0; i < r1; i++) {
        printf("\n");
        for(j = 0; j < c1; j++) {
            printf("%d ", matr1[i][j]);
        }
    }

    printf("\nElements from the second matrix:");
    for(i = 0; i < r2; i++) {
        printf("\n");
        for(j = 0; j < c2; j++) {
            printf("%d ", matr2[i][j]);
        }
    }

    int sum = 0;
    printf("\nThe product of our matrices is:\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for(p = 0; p < 2; p++){
                sum = sum + matr1[i][p] * matr2[p][j];
           }
            matr3[i][j] = sum;
            sum = 0;
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
