#include<stdio.h>
int main ()
{
    int a ;
    scanf("%d",& a);
    int b ;
    scanf("%d",&b);
    char choice ;
    printf(" enter the mathmatical operation you want to use ");
    scanf("%c",&choice);
    switch(choice)
    {
        case'+':
        printf("The sun of a and b :%d", a+b);
        break;
        case'-':
        if(a>b)
        {
             printf("%d",a-b);
        }
        else 
        {
        printf("%d",b-a);
        }
        break;
        case'*':
        printf("the product of a and b :%d",a*b);
        break;
    }
    default:
    printf("invalid input");
    break;
    return 0;
}