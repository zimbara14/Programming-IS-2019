#include<stdio.h>

int main()
{
    printf("please! enter a value in hexadecimal in uppercase\n");
    char hexaD[50];
    int len = sizeof(hexaD);
    int base = 1;
    scanf("%s",hexaD);
    int dec = 0;

    for (int i=len-1; i>=0; i--)
    {
        if (hexaD[i]>='0' && hexaD[i]<='9')
        {
            dec += (hexaD[i] - 48)*base;

            base = base * 16;
        }

        else if (hexaD[i]>='A' && hexaD[i]<='F')
        {
            dec += (hexaD[i] - 55)*base;

            base = base*16;
        }
    }

   printf("%d",dec);

}
