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

void quick_sort(int arr[], int len)
{
	dump_array(arr, len);
}