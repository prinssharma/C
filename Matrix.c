#include<stdio.h>
int main()
{
    int a[3][3], i, j, sum=0;
    printf("Enter the element of matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is\n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("Sum of the element = %d",sum);
    return 0;
}
