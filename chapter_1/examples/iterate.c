#include <stdio.h>

/*This program will print a lot of things a lot.*/


int main(int argc, char *argv[]){
	
	int ITERATIONS;
	int i;

	if( argc != 2){
		printf("Please pass the function an integer to be used as iterations\n");
		printf("The correct usage is: %s integer\n", argv[0]);
	}
	else{
		ITERATIONS = atoi(argv[1]);
		for(i = 0; i < ITERATIONS; i = i+1)
			printf("This printed out %d times.\n", ITERATIONS); 
	}
}
