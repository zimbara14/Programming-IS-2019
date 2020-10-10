#include<stdio.h>

int main() {

    // we are asked to input the number in certain number system
    int a;
    printf("enter a hexadecimal value in uppercase - ");
    scanf("%X", &a);
    printf("a = %X\n", a);

    // next, we need to transfer hexadecimal into decimal
    int b;
    printf("our number in decimal\n");
    printf("b = %d", a);

    // from hexadecimal to octal, and octal shifted to the right by 3
    int c;
    printf("\nnumber in octal\n");
    printf("c = %o", a);

    printf("\nC shifted is %o\n", a >> 3);

    // output the octal number with bitwise NOT
    int d;

    printf("~d = %o\n", ~a);

    // two octal numbers - operation OR
    printf("two octal numbers - operation OR %o", a && a);

    return 0;
}
