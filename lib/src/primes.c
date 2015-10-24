/*

API for Prime number related handling

*/

#include <strings.h>

int factorize_long(long int num,long int factors[][2], int limit)
{
	int i=0;
	long int fac;

	bzero(factors,limit*sizeof(long int)*2);
	while ((num % 2) == 0 ){
		num = num/2;
		factors[0][0] = 2;
		factors[0][1]++;
		i = 1;
	}
	for(fac=3; num >= fac; fac = fac+2){

		if ((num % fac) == 0 ){
			factors[i][0] = fac;
			if(i>limit){
				return -1;
			}
			do{
				num = num/fac;
				factors[i][1]++;
			}while ((num % fac) == 0 );
			i++;
		}
	}
	if(!(num == 1)){
		factors[i][0] = fac;
		factors[i][1]++;
		i++;
	}
	return i;
}

