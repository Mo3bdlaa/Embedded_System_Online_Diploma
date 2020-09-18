
/*
 * ex7.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>

void main()
{
    int num;
	
	/* Start factorail with 1 */
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d",&num);

    /* loop terminates when number is less than or equal to 0 */
    do
    {
        fact *= num;
        num--;
    }while (num > 0);

    printf("Factorial= %d", fact);
}


