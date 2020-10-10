#include<stdlib.h>
#include<stdio.h>
#include<math.h>

struct circle {
    float r;
    int no2;
};

int main(){

    enum music {classical, pop, rock, rap, newage, electronic};
    enum music x;
    x = rock;
    printf("The number of the rock music in our array is %d \n", x);


    struct triangle {
        int x1, y1, x2, y2, x3, y3;
    };

    struct triangle A = {1, 2, 3, 4, 5, 6};

    float AB = sqrt(pow((A.x2 - A.x1),2) + pow((A.y2 - A.y1),2));
    float BC = sqrt(pow((A.x3 - A.x2),2) + pow((A.y3 - A.y2),2));
    float AC = sqrt(pow((A.x3 - A.x1),2) + pow((A.y3 - A.y1),2));
    float P = AB + AC + BC;

    printf("\nThe perimeter of our triangle is %f", P);

    union status{
    struct{
        unsigned Active: 1;
        unsigned SDcard: 1;
        unsigned CompactFlashcard: 1;
        unsigned MemoryStickcard: 1;
    }bits;
    unsigned char data;
    };

    union status MyStatus;
    printf("\n\nEnter a hex number:");
    scanf("%x", &(MyStatus.data));
    printf("\nCard-reader status - ");
    printf("\nActive: %s", (MyStatus.bits.Active) ? "On" : "Off");
    printf("\nSD card: %s", (MyStatus.bits.SDcard) ? "On" : "Off");
    printf("\nCompact flash card: %s", (MyStatus.bits.CompactFlashcard) ? "On" : "Off");
    printf("\nMemory stick card: %s", (MyStatus.bits.MemoryStickcard) ? "On" : "Off");
    printf("\n\n");

    return 0;
}
