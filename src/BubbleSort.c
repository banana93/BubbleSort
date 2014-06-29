#include "BubbleSort.h"
#include <stdio.h>

void swap(int array[], int array1, int array2)
{
	int temp;
	temp = array[array1];
	array[array1] = array[array2];
	array[array2] = temp;
	
}
	
void singleBubbleSort(int array[], int size, int length)
{
	int i = 0;
	
	for(i; i < size - 1; i++)
	{
		if(array[length-i-2] > array[length-i-1])
		{
			swap(array, length-i-2, length-i-1);
		}
	}
}

void BubbleSort(int array[], int length)
{
	int i = 0;
	
	for(i; i < length - 1; i++)
	{
		singleBubbleSort(array, length, length);
	}
}