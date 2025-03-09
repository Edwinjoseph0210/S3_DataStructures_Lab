#include <stdio.h>
void quick(int arr[], int, int);
int partition(int arr[], int, int);
void swap(int*, int*);



void quick(int arr[], int low, int high)
{   if(low<high)
    {
        int pi = partition(arr,low,high);
        quick(arr, low, pi-1);
        quick(arr,pi+1,high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
     swap(&arr[i+1],&arr[high]);
     return (i+1);
}

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{   int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the unsorted numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The sorted numbers are:");
    int low=0;
    int high=n-1;
    quick(arr,low,high);
    
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}
