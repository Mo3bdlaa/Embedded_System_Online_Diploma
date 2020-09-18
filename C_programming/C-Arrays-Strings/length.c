
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
 #include<stdio.h>
int main(){
	int i,x=0;
	char t[50] ;

	printf("Enter a string:");
	fflush(stdout);fflush(stdin);
	gets(t);

	for(i=0;t[i]!='\0';i++){
		x++;
	}
	printf("length of string: %d",x);

	return 0;
}