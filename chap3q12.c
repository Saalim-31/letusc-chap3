#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the X and Y co-ordinate of the point   ");
    scanf("%d%d",&x,&y);
    if (x==0&&y==0)
        printf("point lies on the origin");
    else{
        if (x==0&&y!=0)
            printf("Point lies on the Y axis");

        if (x!=0&&y==0)
            printf("Point lies on the X axis");

        if(x!=0&&y!=0)
        printf("Point does not lie on any of the axis");
    }
        return 0;

}
