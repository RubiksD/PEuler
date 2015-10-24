/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <stdio.h>
#include "defines.h"
#include "primes.h"

#define INPUT 600851475143L
#define ARRAY_SIZE 10000

long int factors[ARRAY_SIZE][2];
int main()
{
	long int in = INPUT;
	int index=0;
	int i;
	index =	factorize_long(in,factors,ARRAY_SIZE);
	if( index != -1){
		
	}else{
		ASSERT;
	}
	for(i = 0;i < index ; i++){
		printf("%ld\t%ld\n",factors[i][0],factors[i][1]);
	}

	ANSWER_LINT(factors[index-1][0]);	
}
