#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf ("Enter the X1 and Y1 co-ordinates");
    scanf("%d %d",&x1,&y1);
    printf ("Enter the X2 and Y2 co-ordinates");
    scanf("%d %d",&x2,&y2);
    printf ("Enter the X3 and Y3 co-ordinates");
    scanf("%d %d",&x3,&y3);
    if (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0)
        printf("The points lie on the same line");
    else
        printf("The points does not lie on the same line");
    return 0;
}
