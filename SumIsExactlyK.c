
#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
     int i, j, k;
     int n1 = m - l + 1;
     int n2 = r - m;
     int L[n1], R[n2];

    for (i = 0; i < n1; i++)
     L[i] = arr[l + i];

    for (j = 0; j < n2; j++)
     R[j] = arr[m + 1+ j];
     
     i = 0;
     j = 0;
     k = l;
    while (i < n1 && j < n2)
   {
        if (L[i] <= R[j])
          {
            arr[k] = L[i];
               i++;
          }
         else
           {
            arr[k] = R[j];
             j++;
           }
          k++;
    }

    while (i < n1)
   {
     arr[k] = L[i];
      i++;
      k++;
    }

    while (j < n2)
    {
      arr[k] = R[j];
      j++;
      k++;
    }
}


void mergeSort(int A[], int l, int r)
{
	if (l < r) 
	{
        int mid = (l+r) /2;
		    mergeSort(A, l, mid);
        mergeSort(A, mid+1, r);
        merge(A, l, mid, r);
	}
}

int binarySearch(int arr[], int l, int r, int x)
{
    
	while (l <= r) 
	{
		int mid = (l + r) / 2;
		
            int count=0;
		if (arr[mid] == x)
		{
		        count++;
				if(l <= r && arr[l] == arr[l-1])
			{
			    count+=2;
			}
				return count;
		}

		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
        else
		return binarySearch(arr, mid + 1, r, x);
		
	}

	return 0;
}


int main()
{
	int n, A[50];
	int arr_size;
	//printf("Enter array size\n");

    scanf("%d", &arr_size);
    
   //printf("Enter array element\n");

     for(int i=0; i<arr_size; i++)
    {
        scanf("%d",&A[i]);
    }
    
    //printf("Enter the sum value \n");
    scanf("%d", &n);

    mergeSort(A,0, arr_size-1);
    
     int count = 0;
    
   for(int i = 0; i <= arr_size-1; i++)
   {
       int key = n - A[i];
       
       count += binarySearch(A, i, arr_size-1, key);
   }
    //number of pair whose sum is exactly X
	printf("%d",count);
	return 0;
}


