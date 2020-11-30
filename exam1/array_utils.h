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
 * Scales a given array without changing it based on a given
 * scaling factor.
 */
double * scale(const double *arr, int n, double factor);

/**
 * Prints a given double array.
 */
void printDoubleArray(const double *arr, int n);

/**
 * Returns the minimums and maximum values within an array.
 */
int getMinMax(const int *arr, int n, int *minValue, int *maxValue);

/**
 * Returns the values that are closest to each other in value.
 */
int closestValues(const double *arr, int n, int *indexA, int *indexB);