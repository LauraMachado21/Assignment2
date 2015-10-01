#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int getRandomNumber(int x, int y){

	int r;
	srand(time(NULL));

	r=rand()%(y+1);

	while(r<x){

		r=rand()%(y++);

	}

	return r;
}

int main(void) {

	int low_number;
	int high_number;
	int random_number;

	printf("Input lower and upper bounds for the range: ");
	scanf("%d %d" ,&low_number,&high_number);

	random_number=getRandomNumber(low_number, high_number);

	printf("The random number generated is: %d\n", random_number);

	return 0;
}

