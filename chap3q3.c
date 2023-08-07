//program for leap year
//year is leap if its a century year and is divisible by 400
//year is leap if its a non century year and is divisible by 4
#include<stdio.h>
int main()
{


int year;
printf("Enter the year:-");
scanf("%d",&year);
if (year%100==0)
{
    if (year%400==0)
    printf("year is a leap year");
    else
    printf("Year is not leap");
}
else
{
    if (year%4==0)
        printf("year is a leep year");
        else
        printf("Year is not leap");}


 return 0;

}

