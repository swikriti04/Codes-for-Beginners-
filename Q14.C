#include <stdio.h>
int binarySearch(int array[], int find, int low, int high)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (array[mid] == find)
			return mid;

		if (array[mid] < find)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return 12;
}

int main()
{
int arr[1000],num,find,result;
int i;
printf("Enter the number of elements to be in array:");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("Enter the element :");
scanf("%d",&arr[i]);
}
printf("The array is...");
for(i=0;i<num;i++)
{
printf("%d  ",arr[i]);
}
printf("\n Enter the number needed to searched :");
scanf("%d",&find);
result = binarySearch(arr, find, 0, num - 1);
	if (result == 12)
		printf("Not found");
	else
		printf("Element is found at index %d", result);
	return 0;
}
