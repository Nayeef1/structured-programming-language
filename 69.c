#include<stdio.h>
int main()
{
    int opt,a,b;
    printf("**project Calculator**\n\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n\n");
    printf("Enter the operaion Number: ");
    scanf("%d",&opt);
    if(opt==1){
       printf("Please enter two numbers:");
        scanf("%d%d",&a,&b);
       printf("\n%d+%d=%d\n\n",a,b,a+b);
    }else if(opt==2){
    printf("Please enter two numbers:");
       scanf("%d%d",&a,&b);
       printf("\n%d-%d=%d\n\n",a,b,a-b);
    } else if(opt==3){
    printf("Please enter two numbers:");
       scanf("%d%d",&a,&b);
       printf("\n%d*%d=%d\n\n",a,b,a*b);
    }



}
