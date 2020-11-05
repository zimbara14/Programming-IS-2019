#include<stdlib.h>
#include<stdio.h>

int main(){

    const int n = 4;
    char *names[n];

    names[0] = 'W';
    names[1] = 'O';
    names[2] = 'R';
    names[3] = 'K';

    for(int i = 0; i < n; i++){
        printf("%c ", names[i]);
    }

    printf("\n----------------\n");

    int n2 = 4;
    char *arrw;
    arrw = malloc(n2 * sizeof(int));

    arrw[0] = 'W';
    arrw[1] = 'O';
    arrw[2] = 'R';
    arrw[3] = 'K';

    for(int i = 0; i < n; i++){
        printf("%c ", arrw[i]);
    }

    free(arrw);

    return 0;
}
