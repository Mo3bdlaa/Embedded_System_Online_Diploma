
/*
 * ex3.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>
void main(){

float a, b, c;
printf("Enter three numbers: ");
scanf("%f %f %f", &a, &b, &c);
if(a>=b && a>=c){
printf("Largest number=%.2f", a);
}if(b>=a && b>=c){
printf("Largest number = %.2f", b);
}if(c>=a && c>=b){
printf("Largest number=%.2f", c);
}}
