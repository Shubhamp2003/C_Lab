#include<stdio.h>
void main()
{
    int n,a,b,c,x;
    printf("Enter any 3 digit number: ");
    scanf("%d",&n);
    a=n/100;
    c=n%10;
    b=(n%10)-a;
    x=a+b+c;
    printf("%d",x);
}