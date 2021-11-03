#include "search.h"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// Recursive search function.
bool search(int a[], int n, int x)
{
    assert(n >= 0); // Size of array must not be negative.

    if (n == 0) // Base case. If the array is of size n=0 and contains no elements x won't be found.
        return false;

    else if (n > 0 && a[n - 1] == x) // Base case. If x is present in element n of the array return 'true'.
        return true;

    else // Recursive step searching till one of the base cases is reached. If x isn't present in element n repeat the search function for n-1.
        return search(a, n - 1, x);
}