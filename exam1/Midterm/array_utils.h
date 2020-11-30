/**
 * Author: Noah Zetocha
 * nzetocha2@unl.edu
 *
 * Header file for array functions.
 * 
 */


/**
 * Prints a given integer array.
 */
void printIntArray(const int *arr, int n);

/**
 * Returns the resulting dot product of two arrays without changing
 * the original function
 */
int dotProduct(const int *a, const int *b, int n, int *result1);

/**
 * Returns the resulting dot product of the values within the arrays
 * that are greater than 0.
 */
int biasedDotProduct(const int *a, const int *b, int n, int *result2);

/**
 * Returns a new array with any negative values removed and set with
 * a new size
 */
int *filterPositive(const int *arr, int n, int *newSize);