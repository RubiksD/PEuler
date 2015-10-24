/*

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
#include <stdio.h>
#include "defines.h"
#include "palindrome.h"

int main()
{
	int a,b;
	int temp[2] = {0,0};
	for(a = 110;a<999;a++){
		for(b=110;b<=a;b=b+11){
			temp[0] = a*b;
			if(temp[0]>temp[1]){
				if(is_palindrome(temp[0])){
					temp[1] = temp[0];
				}
			}
		}
	}
	ANSWER_INT(temp[1]);
}
