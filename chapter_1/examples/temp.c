#include <stdio.h>

/* This is how you comment in C, so I guess that is pretty cool. */

main(){

int fahr, celsius;
int lower, upper, step;

lower = 0;
upper = 300;
step = 20;

fahr = lower;
while(fahr <= upper){
	celsius = 5*(fahr-32)/9;
	printf("%d\t%d\n",fahr,celsius);
	fahr = fahr + step;
	}
}
