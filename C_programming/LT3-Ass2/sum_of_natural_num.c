
/*
 * ex6.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>

void main(){

	int n, count, sum=0;

	printf("Enter a number: ");
	scanf( "%d", &n);
	count=1;

	while (count<=n)
	{
	sum=sum+count;
	++count;
    }

	printf("Sum = %d", sum);

}
