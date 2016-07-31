// SortData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "quicksort.h"

int main()
{
	int arr_test[] = { 3, 7, 9, 2, 3, 5 };
	int len = sizeof(arr_test) / sizeof(int);

	quick_sort(arr_test, len);

	dump_array(arr_test, len);
    
	return 0;
}

