#include<stdio.h>
int main()
{
    float a,b,c,x1,x2;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    float temp1 =b*b - 4*a*c;
    printf("The equation is %.1fx^2+%.1fx+%.1f=0\n",a,b,c);
    if(a !=0 && temp1>0)
    {
        x1 = (-b + sqrt(temp1))/(2*a);
        x2 = (-b - sqrt(temp1))/(2*a);
        printf("Root1 = %.3f\n",x1);
        printf("Root2 = %.3f\n",x2);
    }

    else
    {
        printf("The roots of this equation is not possible");
    }

}
