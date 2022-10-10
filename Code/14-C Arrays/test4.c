#include <stdio.h>

double getAverage(int arr[], int size);


double getAverage(int arr[], int size){
	int i;
	double avg;
	double sum = 0;

	for(i=0; i<size; i++){
		sum += arr[i];
	}
	avg = sum / size;

	return avg;
}


int main(){
	double avg;
	int balance[5] = {1000, 2, 3, 17, 50};

	avg = getAverage(balance, 5);

	printf("Average value is : %f\n", avg);

	return 0;
}


