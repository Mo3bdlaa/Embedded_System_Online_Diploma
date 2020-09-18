
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
 #include<stdio.h>
int main(){
	int i,x=0;
	char t[50] ,c;

	printf("Enter a string:");
	gets(t);
	printf("Enter a character to find frequency:");
	scanf("%c",&c);

	for(i=0;t[i]!='\0';i++){
		if(t[i]==c){
			x++;
		}
	}
	printf("Frequency of %c = %d",c,x);

	return 0;
}