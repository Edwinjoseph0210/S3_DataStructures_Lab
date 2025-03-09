#include <stdio.h>

int main() {
int n, num, i = 0, j = 0, temp, count = 0;
count += 3;
printf("Enter the array size: ");
scanf("%d", &n);

int a[n];
printf("\nEnter the array elements: ");
for (i = 0; i < n; i++) 
{
	scanf("%d", &a[i]);
	count+=2;
}	count++;

for (i = 0; i < n - 1; i++) 
{
	count ++;
	for (j = 0; j < n - i - 1; j++) 
	{
		count += 2;
		if (a[j] > a[j + 1]) 
			{
			count++;
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			count++;
			}
	}
	count++;
} count++;

printf("\nSorted array is: ");
for (i = 0; i < n; i++)
{
	count++;
	printf("%d ", a[i]);
	count++;
}count++;

int l = 0, r = n - 1;
printf("\nEnter the element to be searched: ");
scanf("%d", &num);

while (l <= r) 
{
	count+2;
	int mid = (l + r) / 2;
	if (a[mid] == num)
	{
		count+=2;
		printf("Element is found at index %d\n", mid);
		break;
	}
	else if (a[mid] > num)
		{
		count+=2;
		r = mid - 1;
		}
	else
		{
		count+=2;
		l = mid + 1;
		}
}count++;
if (l > r)
{
	count+=2;
	printf("Element is not found\n");
}

printf("\nTime complexity is %d\n", count);
printf("Space complexity is %d\n", 24 + 4 * n);
return 0;
}
