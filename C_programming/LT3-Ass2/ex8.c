
/*
 * ex8.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>
void main(){

	char operator;
	float x;
	float y;

	printf("Enter operator either + or - or * or divide ");
	scanf("%c", &operator);

	printf("Enter two numbers: \n");
	scanf("%f %f",&x , &y);
	
	switch(operator){
	case '+':
	printf("%.1f + %.1f = %0.1f", x ,y ,x + y);
	break;
	case '-':
	printf("%.1f - %.1f = %.1f",x, y, x-y) ;
	break;
	case '*':
    printf("%.1f * %.1f = %.1f",x, y, x*y) ;
	break;
	case '/':
	printf("%.1f / .1f = %.1f",x, y, x/y);
	break;
	default:
	printf("Error! operator is not correct");
	break;
	}
}
