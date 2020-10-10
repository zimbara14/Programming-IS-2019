#include <dos.h>
#include<time.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
    FILE *fp = fopen(argv[1], "w");
    time_t t;
    time(&t);

    //printf("\nThis program has been writeen at (date and time): %s", ctime(&t));

    struct tm *local = localtime(&t);
    int hours, minutes, seconds, day, month, year;
    hours = local->tm_hour;
    minutes = local->tm_min;
    seconds = local->tm_sec;
    day = local->tm_mday;
    month = local->tm_mon+1;
    year = local->tm_year + 1900;
    //argc = day;

    for(int i = 0; i < 10; i++){
        fprintf(fp,"date is %02d/%02d/%d\n", day, month, year);
        day++;
    }

    return 0;
}
