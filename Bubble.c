#include <stdio.h>

int main()
{
	int i,j,n,temp,c=0;
	c++;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{ c++;
	c++;
		scanf("%d", &arr[i]);
	}c++;
	
	for(i=0;i<n-1;i++)
	{ c++;
		for(j=0;j<n-1-i;j++)
		{ c++;
		c++;
			if(arr[j]>arr[j+1])
			{ c++;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}c++;
	}c++;
	
	printf("The sorted array is: ");
	for(i=0;i<n;i++)
	{c++;
	c++;
		printf("%d ",arr[i]);
	}c++;
	
	printf("\nTime Complexity is %d.", c);
printf("\nThe Space Complexity is %d.\n", 24+4*n);
return 0;
	
}
