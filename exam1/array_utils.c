/**
 * Author: Noah Zetocha
 * nzetocha2@unl.edu
 *
 * array practice from lecture.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "array_utils.h"
 
void printIntArray(const int *arr, int n) {
    printf("[");
    for(int i=1; i<n; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[n-1]);
}

void printDoubleArray(const double *arr, int n) {
    printf("[");
    for(int i=0; i<n-1; i++) {
        printf("%.2f, ", arr[i]);
    }
    printf("%.2f]\n", arr[n-1]);
}

double * scale(const double *arr, int n, double factor) {
    if(arr==NULL || n<0) {
        return NULL;
    }
    double * result = (double *) malloc(sizeof(double) * n);
    for(int i=0; i<n; i++) {
        result[i] = arr[i] * factor;
    }
    return result;
}

int getMinMax(const int *arr, int n, int *minValue, int *maxValue) {
    if(arr==NULL || n<1 || minValue==NULL || maxValue==NULL) {
        return 1;
    }
    int min = arr[0]; 
    int max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
        }
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    *minValue = min;
    *maxValue = max;
    return 0;
}


int closestValues(const double *arr, int n, int *indexA, int *indexB) {
    if(arr==NULL || n<2 || indexA==NULL || indexB==NULL) {
        return 1;
    }

    double minDiff = fabs(arr[0]-arr[1]);
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(fabs(arr[i]-arr[j]) < minDiff) {
                minDiff = fabs(arr[i]-arr[j]);
                *indexA = i;
                *indexB = j;
            }
        }
    }
    
    return 0;
}