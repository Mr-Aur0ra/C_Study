#include <stdio.h>

double getAverage(int *arr, int size);

int main(){
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;

	avg = getAverage(balance, 5);

	printf("Average value is: %f\n", avg);

	return 0;
}

double getAverage(int *arr, int size){
	int i;
	int sum = 0;
	double avg;

	for(i=0; i<size; i++){
		sum += arr[i];
	}
	avg = (double)sum / size;
	return avg;
}


