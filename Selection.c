#include <stdio.h>

int main() 
{
int n, i, j, temp,small,c=0;
c++;
printf("Enter the array size: ");
scanf("%d", &n);

int a[n];
printf("Enter the  elements: \n");
for (i = 0; i < n; i++) 
{	c++;
	c++;
	scanf("%d", &a[i]);
}c++;
j=i+1;
for(i=0;i<n-1;i++)
{ c++;
	small=i;
		for(j=i+1;j<n;j++)
		{ c++;
			c++;
			if(a[j]<a[small])
			{ c++;
				small=j;
			}
		}c++;

	if(i!=small)
	{ c++;
		temp=a[i];
		a[i]=a[small];
		a[small]=temp;
	}
		
}c++;

printf("The sorted array is: ");
for (i = 0; i < n; i++) 
{	c++;
	c++;
	printf("%d ", a[i]);
}c++;

printf("\nTime Complexity is %d.", c);
printf("\nThe Space Complexity is %d.\n", 24+4*n);
return 0;
}	
	
