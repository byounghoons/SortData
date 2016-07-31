// SortData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "quicksort.h"

int main()
{
	int arr_test[] = { 7, 2, 5, 3, 9 };
	
	quick_sort(arr_test, sizeof(arr_test) / sizeof(int));

    return 0;
}

