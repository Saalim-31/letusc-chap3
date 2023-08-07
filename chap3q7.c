#include<stdio.h>
//program whether the triangle is valid or not
int main()
{
    float a1,a2,a3,sum;
    printf("Enter the first angle of the triangle:- ");
    scanf("%f",&a1);
     printf("Enter the second angle of the triangle:- ");
    scanf("%f",&a2);
     printf("Enter the third angle of the triangle:- ");
    scanf("%f",&a3);

    if(a1+a2+a3==180)
        printf("triangle is valid");
    else
        printf("Triangle is invalid");
    return 0;



}
