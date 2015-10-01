#include <stdio.h>

void Switch(float *x, float *y){

	float temp;

	temp=*x;
	*x=*y;
	*y=temp;

}

void reverse_array(float *arr, int n){

	int i;
	
	for(i=0;i<5;i++){

		Switch((arr+i),(arr+(n-1)));

		n--;

	}

}

void outputArray(float *arr, int n){

	int i;
	
	reverse_array(arr,n);


	for(i=0;i<n;i++){

		printf("%.2f\t", *(arr+i));

	}

}



void inputArray(float *arr,int n){

	int i;
	float value;

	printf("Input 10 numbers: ");
	
	for(i=0;i<n;i++){

		scanf("%f", &value);
		*(arr+i)=value;

	}

	
	outputArray(arr,n);

}

	

int main(void){
	
	float array[10];
	float *arr;

	arr=array;

	inputArray(arr,10);

	return 0;
}
