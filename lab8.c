#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {

    char first[100];
    char second[100];
    int n;
    printf("Enter the first string -> ");
    gets(first);
    printf("Enter the second string -> ");
    gets(second);
    //2
    printf("Input the number of first character -> ");
    scanf("%d", &n);
    char *c = strncat(first, second, n);
    printf("The concatenation of our two strings is -> %s", c);
    //5
    char *c2 = strcpy(first, second);
    printf("\nThe copy of one into the other is -> %s", c2);
    //8
    printf("\nEnter a character: ");
    char sara;
    scanf(" %c", &sara);
    char *ss = strchr(first, sara);
    printf("\nFinding the symbol in our string -> %p\n", ss);
    //11
    printf("Enter new strings: ");
    char one[100];
    char two[100];
    printf("\n1\n");
    scanf("\n %s", one);
    printf("\n2\n");
    scanf("\n %s", two);
    /*char *s1 = strpbrk(one, two);
    printf("\n The pointer to the first symbol which is similar to one of the symbols 2nd string -> %p", s1);*/
    int s2 = strspn(one, two);
    printf("\nThe length of the initial segment of one which consists entirely of characters in two -> %d, and the rest is -> ", s2);
    /*int *s3 = strcmp(one, two);
    printf("\nCompares the string pointed to, by str1 to the string pointed to by str2. -> %d", s3);*/
    //13
    //char *s4 = strpbrk(one, two);
    printf("\nEnter new strings: ");
    char one1[100];
    char two2[100];
    printf("\n1 -> ");
    scanf("\n %s", one1);
    printf("\n2 -> ");
    scanf("\n %s", two2);
    char *s5 = strtok(one1, two2);
    //printf("something %s", *s5);
    int j = 100;
    char three[100];
    for(int i=0; i < 100; i++){
        if(one1[i]!=*s5){
            three[i] = one1[i];
        } else{
            three[i] = ' ';
        }
    }
    printf("%s", one1);

    /*char one1[100];
    char two2[100];
    printf("\n1\n");
    scanf("\n %s", one1);
    printf("\n2\n");
    scanf("\n %s", two2);

    char token;
    token = strtok(one1, two2);
    printf("%s", token);

    while( token != NULL ) {
      printf( "%s ", token );

      //token = strtok(NULL, two2);
    }*/

    return 0;
}
