#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,rad;
    printf("Enter the X and Y co-ordinates of the circle  ");
    scanf("%d%d",&x,&y);
    printf("Enter the radius of the circle   ");
    scanf("%d",&rad);
    if ((pow(x,2)+pow(y,2))>rad)
        printf("Point lies outside the circle");
    if ((pow(x,2)+pow(y,2))<rad)
        printf("Point lies inside the circle");
    if ((pow(x,2)+pow(y,2))==rad)
        printf("Point lies on the circle");
    return 0;

}
