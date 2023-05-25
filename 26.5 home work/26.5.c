#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

void reverse(int* arr)
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		int j = 0;
		for ( j = 0; j < 9; j++)
		{
			if (*(arr+j)%2==0&&*(arr+j+1)!=0)
		{
			int tmp = *(arr + j);
			*(arr + j) = *(arr + j + 1);
			*(arr + j + 1) = tmp;
		}
		}
		
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *arr++);
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		scanf_s("%d",&arr[i]);
	}
	reverse(arr);
	
	
	return 0;
}