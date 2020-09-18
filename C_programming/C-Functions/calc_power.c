
/*
 *
 *  Created on: Sep 18, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>

int calc(int num, int rep);

int main()
{
	int base,res;
	unsigned int power;
	printf("Enter base number: ");
	scanf("%d", &base);

	printf("Enter power number \"it hould be +ve\" : ");
	scanf("%d", &power);

	res = calc(base, power);

	printf("%d ^ %d = %d\n", base, power, res);

	return 0;
}

int calc(int num, int rep)
{
	if (1 == rep)
		return num;
	else
		return (num * calc(num, rep - 1));
}