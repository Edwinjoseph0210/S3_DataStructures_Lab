#include<stdio.h>

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

    for(int i=0;i<n;i++)
    {   
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    
    printf("The sorted numbers are:");

    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
}