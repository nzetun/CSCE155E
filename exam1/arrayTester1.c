/**
 * Author: Noah Zetocha
 * nzetocha2@unl.edu
 *
 * This program is a generalization of the classic FizzBuzz program.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "array_utils.h"

int main(int argc, char **argv) {
    
    int n = 7;
    double input[] = {2.71, 3.14, -5.3, 3.15, 0, -1, 123.45};
    
    printDoubleArray(input, n);
    double * scaleResult = scale(input, n, 0.5);
    printDoubleArray(scaleResult, n);
    
    double *testArray;
    double *result = scale(testArray, 10, 0.5);
    
    int arr[] = {10, -5, 3, 4, 21, 0 ,1};
    int min, max;
    getMinMax(arr, n, &min, &max);
    printf("minimum: %d \n", min);
    printf("maximum: %d \n", max );

    int indexA, indexB;
    int diff = closestValues(input, n, &indexA, &indexB);
    printf("The closest values are at indices %d and %d\n", indexA, indexB);
    printf("with a difference of %.2f\n", fabs(input[indexA] - input[indexB]));
    
    return 0;
}