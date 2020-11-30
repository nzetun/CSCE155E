/**
 * Author: Noah Zetocha
 * nzetocha2@unl.edu
 *
 * This program is a generalization of the classic FizzBuzz program.
 * 
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

    int a = 1;
    int b = 100;
    int p = 3;
    int q = 5;
    
    for(int i=a; i<=b; i++) {
        if(i%(p*q)==0) {
            printf("FizzBuzz\n");
        } else if(i%p==0) {
            printf("Fizz\n");
        } else if(i%q==0) {
            printf("Buzz\n");
        }  else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}