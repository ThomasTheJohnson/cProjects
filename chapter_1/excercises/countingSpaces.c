#include <stdio.h>

main(){
	
	double spaceCount;
	int character;

	while((character = getchar()) != EOF){
		if(character == ' ' || character == '\t' || character == '\n')
			++spaceCount;
	}
	
	printf("Total number of space characters: %.0f\n", spaceCount); 

}





