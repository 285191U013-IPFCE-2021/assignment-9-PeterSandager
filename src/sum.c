#include "sum.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Recursive sum function.
int sum(int a[], int n)
{
    assert(n >= 0); // n must not be negative.

    if (n == 0) // If n=0 the array contains no elements and the sum will of course be 0.
        return 0;
    else
        return a[n - 1] + sum(a, n - 1);
}