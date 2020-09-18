
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include<stdio.h>
#include<string.h>
int main(){
	int i,x,j=0;
	char t[50],c[50] ;

	printf("Enter a string:");
	fflush(stdout);fflush(stdin);
	gets(t);
	x=strlen(t);
	j=x-1;

	for(i=0;i<x;i++){
		c[j]=t[i];
		j--;
	}

	c[j]='\0';
	printf("reverse string is:%s",c);

	return 0;
}