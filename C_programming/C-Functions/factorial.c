
/*
 *
 *  Created on: Sep 18, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>

unsigned int factorial(unsigned int n);

int main()
{
	unsigned int Num, res;
	
	printf("Enter a positive number: ");
	scanf("%d", &Num);

	res=factorial(Num);

	printf("Factorial of %d = %d\n",Num,res);
	
	return 0;
}

unsigned int factorial(unsigned int n)
{
	if (n == 1)
		return 1;
	else
		return( n * factorial(n - 1));
}