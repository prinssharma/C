#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,m,n,p,q,sum;
    printf("Enter order of first Matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter matrix element\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("The first matrix is \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
        printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
   printf("Enter order of second Matrix\n");
    scanf("%d %d",&p,&q);
    printf("Enter matrix element\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    printf("The second matrix is \n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
        printf("%d\t",b[i][j]);
        }
    printf("\n");
    }
    if( n != p)
    {
        printf("Matrix multiplication not possible\n");
    }
    else
    {
       for(i=0; i<m; i++)
       {
           for(j=0; j<q; j++)
          {
              sum = 0;
             for(k=0; k<m; k++)
             {
                sum += (a[i][k]*b[k][j]);
             }
              c[i][j] = sum;
          }

       }
        printf("The matrix multiplication is\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }

    }
}
