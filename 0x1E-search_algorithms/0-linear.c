#include <search_algos.h>
/**
 * linear_search - Function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array.
 * @value: value to search for
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
    int pointer;

    if (!*array)
    {
        return (-1);
    }
    for (pointer = 0; pointer < size; pointer++)
    {
        printf("Value checked array[%d] = [%d]", pointer, array[pointer]);
        if (array[pointer] == value)
        {
            return (pointer);
        }
    }
}
