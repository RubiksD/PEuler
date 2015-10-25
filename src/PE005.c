/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <stdio.h>
#include "defines.h"

int main() {
  /* code */
  int num;
  int prime_list[] = {2,3,5,7,11,13,17,19};
  int max_pow[]={1,1,1,1,1,1,1,1};
  int i,j,temp;
  int answer=1;
  for(i=0;i<(sizeof(prime_list)/sizeof(int));i++){
    for(j=(prime_list[i]*2);j<=20;j++){
      temp = 0;
      num = j;
      while((num%prime_list[i]) == 0){
        temp++;
        num = num/prime_list[i];
      }
      if(temp>max_pow[i]){
        max_pow[i]=temp;
      }
    }
  }

  for(i=0;i<(sizeof(prime_list)/sizeof(int));i++){
    for(j=1;j<=max_pow[i];j++){
      answer *=prime_list[i];
    }
  }
  ANSWER_INT(answer);
}
