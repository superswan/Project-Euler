#include <stdio.h>
#include <math.h>

int sumsquares(int stop){
	int sum = 0;
	for(int i=1; i <= stop; i++){
		sum += pow(i, 2);
	}
	return sum;
}

int squaresums(int stop){
	int sum = 0;
	for(int i=1; i<= stop; i++){
		sum += i;
	}
	return pow(sum, 2);
}

int main(){
	printf("%d\n", sumsquares(100));
	printf("%d\n", squaresums(100));
	printf("%d\n", squaresums(100) - sumsquares(100));
	return 0;
}

