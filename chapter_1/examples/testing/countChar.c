#include <stdio.h>

main(){
	/* This is one way of doing this.
	long charCount = 0;
	while(getchar() != EOF){
		++charCount;
	}
	*/

	/*This can also be done with a for-loop*/
	
	double charCount;
	
	/* C does not let you have an empty for loop body, interesting. */

	for(charCount = 0; getchar() != EOF; ++charCount)
		;
 
	printf("%.0f\n", charCount);
}
