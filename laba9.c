#include<stdio.h>

int main(){

    char text[50];
    printf("Input a sequence of characters -> ");
    scanf("%s", text);
    int textIndex = 0;

    while (text[textIndex] != '\0') {
        textIndex++;
    }
    printf("Your stuff is %d\n", textIndex);

    //int n;
    //char result[];
    printf("Input a number -> ");
    char *hello []= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int x;
    scanf("%d", &x);
    printf("\nYour number with letters is -> %s", hello[x]);



    return 0;
}
