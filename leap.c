#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&year);
  if(year%4==0&&year%400==0&&year%100==0)
{
printf(“%d given year is leap year”);
}
else
printf(“%d given year is not leap year”);
return 0;
}
