#include "stdafx.h"
#include "quicksort.h"
#include <iostream>

using namespace std;

void dump_array(int arr[], int len)
{
	for (int i = 0; i < len; i++)
		cout << arr[i] << ", ";
	
	cout << "END\n";
}

void swap_arr(int arr[], int len, int i, int j)
{
	int temp;

	if (i < 0 || i >= len || j < 0 || j >= len)
		return;
	
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int len)
{
	int p = 0;

	for (int i = 0; i < len; i++)
	{
		if (arr[0] > arr[i])
		{
			swap_arr(arr, len, i, ++p);
		}
	}

	swap_arr(arr, len, 0, p);
	return p;
}

void quick_sort(int arr[], int len)
{
	dump_array(arr, len);

	if (len <= 1)
		return;

	int p = partition(arr, len);
	quick_sort(arr, p);
	quick_sort(arr + p + 1, len - p - 1);
}