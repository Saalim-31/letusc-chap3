#include<stdio.h>
int main ()
{


float sp ,cp,pro,loss ;
printf("Enter the cost price of the product :- ");
scanf("%f",&cp);
printf("Enter the selling price of the product :- ");
scanf("%f",&sp);
if(sp>cp)
{
    printf("You have made profit ");
    pro=(sp-cp);
    printf("=%f",pro);


}
if(sp<cp)
{
    printf("You have made loss ");
    loss=(cp-sp);
    printf("=%f",loss);


}

return 0;
}

