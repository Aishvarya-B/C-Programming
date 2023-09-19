/* To check whether a given year is a leap year */
#include<stdio.h>

int main()
{int y;
scanf("%d",&y);
if (y%4==0 &&(y%400==0 ||y%100!=0))
printf("It is leap year");
else
printf("It is not a leap year");
return 0;
}
