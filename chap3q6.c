#include<stdio.h>
int main()
{
    int r,s,a,young;
    printf("Enter the age of Ram ,Shaam and Ajay ");
    scanf("%d%d%d",&r,&s,&a);
    if (r<s)
    {
        if(r<a)
            young=r;
        else
            young=a;

    }
    else{
        if (s<a)
            young=s;
        else
            young=a;
    }
    printf("The youngest among ram%d shaam%d and ajay%d is %d",r,s,a,young);
    return 0;
}
