/* Given a set of n integers and another integer, 
determine wheather or not exists two elements in 
S whose sum is exactly K?  */



#include <stdio.h>
int main()
{
    int n, count=0, k;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    int a[50];
    printf("Enter array element\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered array is : ");
     for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Enter the element you want to find the sum of two element");
    
    scanf("%d", &k);
    
    for(int i=0; i< n; i++)
    {
        
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j] == k)
            {
                count++;
            }
        }
    }
    printf("There number of pair whose sum is  %d  is = %d",k,count);    
}