/*
https://projecteuler.net/problem=1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <stdio.h>

int i=0, sum=0;
int n = 1000;
int array[] = {};

int main(int argc, char **argv) {

    while (i < n) {
        if (i % 3 == 0 || i % 5 == 0){ //if i is divisible (a multiple) of 3 or 5 add it to an array
            array[i] = i;
            printf("%d\n",array[i]);
            sum += array[i]; //sum the elements of the array
        } 
    i++;
    }
    printf("%d\n", sum);
}

