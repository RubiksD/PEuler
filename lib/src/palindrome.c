/*

API for Palindromes

*/

int is_palindrome(int num)
{
	int copy = num;
	int digit;
	int rev = 0;
	if((num % 11) == 0){
		while(copy){
			digit = copy%10;
			rev = rev*10 +digit;
			copy = copy / 10;
		}
		if(rev == num){
			return 1;
		}
	}
	return 0;
}
