 #include <stdio.h>

int main()
{
    float a[10];
    printf("Enter any number: ");
    for(int i=0;i<10;i++)
    {
    scanf("%f",&a[i]);
    }
    printf("\n\nThe entered numbers are:\n");
    for(int i=0;i<10;i++)
    {
    printf("%f\n",a[i]);
    }
    
    return 0;
}
