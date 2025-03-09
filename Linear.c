#include <stdio.h>

int main()
{
	int i,num,n,pos,flag=0,count=0,sp;
	count=count+2; 
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{ 	count++;
		scanf("%d",&arr[i]);
		count++;
		
	}count++; 
	printf("Enter the number you wish to search for: \n");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{ count++;
		if(arr[i]==num)
		{ pos=i+1;
		count++;
		count++;
		printf("The element is found at the %dth position.\n",pos);
		flag++;
		}
	}count++;
	if(flag==0)
		{ printf("The number is not present.\n");
		count++;
		}
	printf("The Time Complexity=%d.",count);
	sp=28+4*n;
		
	printf("\nThe Space Complexity=%d.\n",sp);
}
