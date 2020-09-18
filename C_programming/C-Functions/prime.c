
/*
 *
 *  Created on: Sep 18, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>

int primeflag = 0;

void prime(int Num);

int main()
{
	int Num1, Num2;

	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &Num1, &Num2);

	printf("Prime numbers between %d and %d are: ", Num1, Num2);
	for (int i = Num1 + 1; i < Num2; i++)
	{
		prime(i);
	}
	if (primeflag == 0)
		printf("None.\n");
	else
		printf("\n");

	return 0;
}

void prime(int Num)
{
	int flag = 0;
	for (int i = 2; i < Num; i++)
	{
		if ((Num % i) == 0)
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
	{
		printf("%d ", Num);
		primeflag = 1;
	}
}