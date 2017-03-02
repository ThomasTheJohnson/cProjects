#include <stdio.h>

main(){
	int c;
	while((c = getchar()) != EOF){
		printf("%d\n", c);
	}
	printf("The value of EOF is: %d\n", c);
}
