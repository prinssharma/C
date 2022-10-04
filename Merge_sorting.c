#include<stdio.h>
int a[20],b[20];
void mergesort(int a[], int left, int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
void merge(int a[], int left, int mid, int right)
{
    int i,j,k,b[20];
     i=left, j=mid+1, k=left;
    while(i <= mid && j <= right)
    {
        if(a[i] <= a[j])
            {
            b[k] = a[i];
            i++;
            k++;
            }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if(i > mid)
    {
        while(j <= right)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (i = left; i <= right; i++)
    {
      a[i] = b[i];
    }
}
int main()
{
    int i,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter unsorted array element\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n);
    printf("The sorted array is\n");
   for (i=1; i <= n; i++)
    {
   printf("%d\t",a[i]);
    }
    return 0;
}
