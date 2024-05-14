//sum of two integer using function
#include<stdio.h>

int sum(int x, int y);  // declare

int main()
{
    int a,b,c;
    printf("Enter 2 numbers: \n");
    scanf("%d %d",&a,&b);
    c=sum(a,b);   //function calling
    printf("%d",c);
    // printf("%d",x);

    return 0;
}

int sum(x,y)  // definition
{
    int z;
    z=x+y;
    return z;
}