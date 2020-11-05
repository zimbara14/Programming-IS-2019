#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int nod(int x, int y){

    int res;
    if(x==y)
        return x;
    int d = x - y;
    if (d < 0){
        d = -d;
        res = nod(x, d);
    } else {
        res = nod(y, d);
    }
    return res;
}

int nok(int x, int y){

    return (x * y)/nod(x, y);

}

int noofnos(int x, int num){

    int result = x % 10;
    int arr[] = {0};
    for(int i = 0; i < num - 1; i++){
        arr[i] = result;
        x /= 10;
    }
    return arr;
}


int main() {

    //1 - NOD and NOK
    int n1, n2;
    printf("Enter 1st number -> ");
    scanf("%d", &n1);
    printf("Enter 2nd number -> ");
    scanf("%d", &n2);

    int result1;
    result1 = nod(n1, n2);
    printf("NOD is -> %d", result1);

    int result2;
    result2 = nok(n1, n2);
    printf("\nNOK is -> %d", result2);

    //2 - arrays
    int n;
    printf("\nEnter a number of few digits -> ");
    scanf("%d", &n);
    int number = n;
    double len = (int)log10((double)number) + 1;
    int * arr = (int * )malloc(len * sizeof(int));
    int i = -1;
    int result;
    result = n;
    printf("\nYour array is -> ");
    while(i != len){
        i++;
        n = result;
        arr[i] = n % 10;
        result /= 10;
    }
    for(int j = i-1; j >= 0; j--){
        printf("%d ", arr[j]);
    }

   return 0;
}
