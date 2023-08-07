#include<stdio.h>
//program for obtaining greatest between perimeter and area
int main()
{
    float length,breadth,peri,area;
    printf("Enter the length of the rectangle:-");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle:-");
    scanf("%f",&breadth);
    peri=2*(length+breadth);
    area=length*breadth;
    if (peri<area)
        printf("Area is greater than the perimeter");
    if (peri>area)
        printf("Area is less than the perimeter");
    if (peri==area)
        printf("area and perimeter are same");
    return 0;

}
