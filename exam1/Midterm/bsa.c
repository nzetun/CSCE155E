/**
 * Author: Noah Zetocha
 * nzetocha2@unl.edu
 *
 * This program computes the Body Surface Area (BSA) in square meters
 * of a patient given weight in kg and height in cm based on the 
 * Du Bois formula the Haycock Formula and the Boyd formula.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    if(argc !=3){
        printf("Usage: ./a.out 1 2 (height (cm), weight (kgs))\n");
        exit(1);
    }

    double weight = atof(argv[1]);
    double height = atof(argv[2]);
    
    if(height<0 || weight<0) {
        printf("Error: please inpute positive values");
        exit(1);
    }

    //Du Bois formula to find BSA
    double duBois = sqrt((height * weight) / 3600.0);
    
    //Haycock formula to find BSA
    double haycock = ((pow(height, 0.3964)) * (pow(weight, 0.5378)) * 0.024265);
    
    //Boyd formula to find BSA
    double wExponent = (0.6157 - (0.00816474 * log(weight)));
    double boyd = ((pow(height, 0.3)) * (pow(weight, wExponent)) * 0.0333);
    
    //average of the three formulas
    double average = (duBois + haycock + boyd) / 3.0;

    printf("\nPatient:\n===========================\n");
    printf("    Height:     %.2lf cm\n", height);
    printf("    Weight:     %.2lf kg\n", weight);
    printf("Formula         BSA (m^2)\n");
    printf("===========================\n");
    printf("Du Bois         %lf\n", duBois);
    printf("Haycock         %lf\n", haycock);
    printf("Boyd            %lf\n", boyd);
    printf("---------------------------\n");
    printf("Average         %lf\n", average);
    
    return 0;

}