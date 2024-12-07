#ifndef SORT
#define SORT
#include "stringProcessor.h"
#include <string.h>

void swap(char** a, char** b)
{
    char* t = *a;
    *a = *b;
    *b = t;
}

void quick_sort(char** arr, size_t length)
{
    if (length <= 1)
    {
        return;
    }

    size_t pivot = 0;

    for (size_t i = 0; i < length; i++)
    {
        if (strcmp(arr[i], arr[length - 1]) < 0)
        {
            swap(&arr[i], &arr[pivot++]);
        }
    }

    swap(&arr[pivot], &arr[length - 1]);

    quick_sort(arr, pivot);
    pivot++;
    quick_sort(arr + pivot, length - pivot);
}

#endif // !SORT