#include<stdio.h>
int main()
{
    int a[15],n,i,j,temp = 0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array is\n");
    for(i=1; i<n; i++)
    {
        temp = a[i];
        j = i-1;
        while(j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
