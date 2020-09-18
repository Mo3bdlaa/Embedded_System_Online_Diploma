
/*
 * ex1.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include<stdio.h>

void main(){
int x;
printf("Enter an integer you want to check: ");
scanf("%d",&x);
if((x%2)==0)  // Checking whether the remainder is 0 or not
{
	printf("%d is even",x);
}else{
printf("%d is odd",x);
}}
