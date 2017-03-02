#include <stdio.h>

main(){
	
	int character;
	while((character = getchar()) != EOF){
		if(character == ' '){
			while((character = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(character);
	}

}
