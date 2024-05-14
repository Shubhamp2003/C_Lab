#include<stdio.h>

struct book
{
char name[100];
};

int main()
{
    int n=50;
    struct book b[n];
    for (int i=0;i<n;i++)
    {
        printf("\nEnter name of %d book: ",i+1);
        scanf(" %[^\n]s",b[i].name);
    }
    printf("\nThe data of 50 books are:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d. %s\n",i+1,b[i].name);
    }
    
    return 0;
}