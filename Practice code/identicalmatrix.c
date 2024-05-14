#include<stdio.h>
void main()
{
    int m=2,n=2;
    int i,j,a[m][n],b[m][n];
    int count=0;
    printf("\nLa babe, Enter the elements for first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nla fery aajai ekxoti, Enter the elements for second matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nfirst matrix element haru yo thyo hana:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nani Second matrix element haru yo thyo hana:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            count++;
        }
    }
    if(count==0)
    printf("\nWow bebs, good one.\nBoth are identical matrices.");
    else
    printf("\nNot this time yaar\nIdentical xaina hau yo.");
}