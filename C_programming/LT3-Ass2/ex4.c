
/*
 * ex4.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>

void main(){

float num;
printf("Enter a number: ");
scanf("f", &num);
if (num < 0) //Checking if num<0
{printf( "%.2f is negative.", num );
}else if (num > 0) //Checking if num>0
{printf("%.2F is positive.",num );
}else{
printf("You entered zero, 0");
}
}

