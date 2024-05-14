//sum of n natural number
#include<stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a= n-i;
        sum=sum+a;
    }
    printf("\nthe sum of first %d natural number is %d",n,sum);
    return 0;
}