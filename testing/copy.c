#include <stdio.h>

main(){
	/*So, in this pretty nifty example, we are using the int data type to store char data. Because everything at its base level is stored in bits this is fie, because the int data type just stores the same byte pattern that a char would, but in a bigger storage type */
	
	int c;
	
	/*Eventually, when the method getchar() gets to the end of the user input it throws an EOF warning, which is stored in the int data type as a specific bit pattern. That Is when the loop knows to stop terminating*/
	while((c = getchar()) != EOF){
		putchar(c);
	}
}
