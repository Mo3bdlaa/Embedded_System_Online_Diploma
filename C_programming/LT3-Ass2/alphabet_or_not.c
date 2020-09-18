
/*
 * ex5.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>

void main(){

	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	if( (c>='a' && c<='z') || (c>='A' && c<='Z')){
	printf("%c is an alphabet",c);
	}else{
	printf("%C is not an alphabet",c);
}
}
