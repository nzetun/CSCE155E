/**
 * Author: Noah Zetocha
 * nzetocha2@unl.edu
 *
 * This is the source file of functions for the arrays 
 * located in array_utils.h.
 *
 */
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "array_utils.h"
 
int dotProduct(const int *a, const int *b, int n, int *result) {
    if(a==NULL || b==NULL || n<0 || result==NULL) {
        return 1;
    }
    int dotProd = 0;
    int sum1 = 0;
    for(int i=0; i<n; i++) {
        dotProd = a[i] * b[i];                                   //multiplication of each spot in a and b
        sum1 += dotProd;
    } 
    *result = sum1;
    return 0;
}

int biasedDotProduct(const int *a, const int *b, int n, int *result1) {
    if(a==NULL || b==NULL || n<0 || result1==NULL) {
        return 1;
    }
    int bdotProd = 0;
    int sum2 = 0;
    for(int i=0; i<n; i++) {
        if(a[i]>0 && b[i]>0) {
            bdotProd = a[i] * b[i];                               //multiplication of each spot in a and b if the values are greater than 0
            sum2 += bdotProd;
        } else if(a[i]<0 && b[i]<0) {
            bdotProd = fabs(a[i] * b[i]);
            sum2 += bdotProd;
        }
    } 
    *result1 = sum2;
    return 0;
}

int *filterPositive(const int *arr, int n, int *newSize) {
    if(arr==NULL || n<=0 || newSize==NULL) {
        return NULL;
    }
    int negatives = 0;                                          //counts the negative values
    for(int i=0; i<n; i++) {
        if (arr[i] <= 0) {
            negatives++;
        }
    }
    int *resultArray = (int *) malloc(sizeof(int) * (n - negatives));
    int j=0;
    for(int i=0; i<n; i++) {                                    //makes new array of newSize
        if (arr[i] > 0) {
            resultArray[j] = arr[i];
            j++;
        }
    }
    *newSize = n - negatives;
    return resultArray;
}