#include "search_algos.h"
/**
 * b_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @low: Left index in the array
 * @high: right index in the array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int b_search(int *array, size_t low, size_t high, int value)
{
	size_t left = low;
	size_t right = high - 1;
	size_t average = 0;
	size_t j = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			average = (left + right) / 2;
			printf("Searching in array: ");
			for (j = left; j < right; j++)
			{
				printf("%d, ", array[j]);
			}
			printf("%d\n", array[j]);
			if (array[average] < value)
			{
				left = average + 1;
			}
			else if (array[average] > value)
			{
				right = average - 1;
			}
			else
			{
				return (average);
			}
		}
	}
	return (-1);
}
/**
 * exponential_search - Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;
	int result;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		result = b_search(array, bound / 2,  min, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}
