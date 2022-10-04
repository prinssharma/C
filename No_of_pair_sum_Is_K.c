
#include <stdio.h>

void
merge (int arr[], int l, int m, int r)
{
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;
  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[l + i];

  for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

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


void
mergeSort (int A[], int l, int r)
{
  if (l < r)
    {
      int mid = (l + r) / 2;
      mergeSort (A, l, mid);
      mergeSort (A, mid + 1, r);
      merge (A, l, mid, r);
    }
}


int
lower_bound (int a[], int l,  int n, int x)
{
  
  int h = n;

  while (l < h)
    {
      int mid = l + (h - l) / 2;
      if (x <= a[mid])
	{
	  h = mid;
	}
      else
	{
	  l = mid + 1;
	}
    }
  return l;
}

int
upper_bound (int a[],int l, int n, int x)
{
  
  int h = n;
  while (l < h)
    {
      int mid = l + (h - l) / 2;
      if (x >= a[mid])
	{
	  l = mid + 1;
	}
      else
	{
	  h = mid;
	}
    }
  return l;
}

int
paircount (int arr[], int i, int n, int k)
{
  int x = 0, count = 0;

  for (int i = 0; i < n - 1; i++)
    {
      x = k - arr[i];

      int lb = lower_bound (arr,i+1,  n, x);

      int ub = upper_bound (arr,i+1,  n, x);

      count += ub - lb;
    }

  return count;
}

int
main ()
{
  int sum, A[50];
  int arr_size;
  //printf("Enter array size\n");

  scanf ("%d", &arr_size);

  //printf("Enter array element\n");

  for (int i = 0; i < arr_size; i++)
    {
      scanf ("%d", &A[i]);
    }

  //printf("Enter the sum value \n");
  scanf ("%d", &sum);

  mergeSort (A, 0, arr_size - 1);

  int count = paircount (A, 0, arr_size , sum);

  //number of pair whose sum is exactly X
  printf ("%d", count);
  return 0;
}
