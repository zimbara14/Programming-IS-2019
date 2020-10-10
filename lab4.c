#include<stdio.h>

int main() {

    signed int a;

    // we create an array with two strings

    char *m[2] = {"Not in the range", "In the range"};
    printf("Enter an integer - \n");
    scanf("%d", &a);

    // after inputting the integer, we want to make sure that it is in the range, so we check that with ANDing

    printf("%s\n", m[(a<=-1) && (a>=-4)]);
    int b;
    printf("Enter another integer in hexadecimal notation - \n");
    scanf("%X", &b);

    // we want to know the 15th bit, so we compare it with a hexadecimal number which has only one 1, in the 15th place

    int bit = b & 0x4000;

    //we want to check if the 15th bit is 1 or 0

    if (bit == 0x4000) {
        int x = 1;
        printf("The bit value is %d", x);
    }
    else {
        int x = 0;
        printf("The bit value is %d", x);
    }


    return 0;
}
