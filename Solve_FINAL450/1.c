#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void reverseArray(int *arr, int size)
{

	int i=0, j = size-1;

	while( i < j )
	{
		swap( &arr[i++], &arr[j--]);


	}
}


int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(a)/sizeof(int);
	reverseArray(a,size);

	for(int i=0; i< 10; i++)
		printf("%d, ", a[i]);
}




