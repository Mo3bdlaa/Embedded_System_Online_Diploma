/*
 * ex6.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */


#include<stdio.h>  //importing stdio library

void main(){

	float  a,b;
		printf("Enter value of a: ");
		scanf("%f",&a);
		printf("Enter value of b: ");
		scanf("%f",&b);
		a+= b;
		b = a-b;
		a-= b;
		printf("After swapping , value of a = %f \n",a);
		printf("After swapping , value of b = %f ",b);
}
