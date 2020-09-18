/*
 * ex6.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */


#include<stdio.h>  //importing stdio library

void main(){

	float x, y, temp;

	printf("Enter value of x: ");
	      scanf("%f",&x);
	      printf("Enter value of y: ");
	      scanf("%f",&y);
	      temp = x;    // Value of x is stored in temp
	      x = y;       // Value of y is stored in x
	      y = temp;    // Value of temp -which contains "x" initial value-  is stored in y

	      printf("\nAfter swapping, value of x = %.2f\n", x);
	      printf("After swapping, value of y = %.2f", y);

}
