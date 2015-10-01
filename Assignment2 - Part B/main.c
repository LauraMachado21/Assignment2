#include <stdio.h>

void drawLine(char c, int n){

	int i;

	if(n<0||n>50){ //Check if "n" is negative or greater than 50.

		for(i=0;i<50;i++){

			printf("%c", c);

		}

	}else{
		for(i=0;i<n;i++){

			printf("%c", c); //Print the character.
		}

	}

	printf("\n");
}



int main(void){

	char c;
	int n;

	printf("Input a character and the number of repitions: ");
	scanf("%c %d",&c,&n);

	drawLine(c,n);

return 0;

}
