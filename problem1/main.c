#include <stdio.h>

int i=0, sum=0;
int n = 1000;
int array[] = {};

int main(int argc, char **argv) {

    while (i < n) {
        if (i % 3 == 0 || i % 5 == 0){
            array[i] = i;
            printf("%d\n",array[i]);
            sum += array[i];
        } 
    i++;
    }
    printf("%d\n", sum);
}

