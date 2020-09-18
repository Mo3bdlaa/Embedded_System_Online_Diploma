
/*
 *
 *  Created on: Sep 18, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>

void reverse(void);

int main()
{
	
	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	reverse();
	printf("\n");

	return 0;
}

void reverse(void)
{
	char c;
	scanf("%c", &c);
	if (!(c == 13 || c==10))
	{
		reverse();
		printf("%c", c);
	}
}