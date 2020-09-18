
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include<stdio.h>

int main(){
	int i,x,e;
	int a[20] ;

	printf("Enter the numbers of elements:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);

	for(i=0;i<x;i++){

		fflush(stdout);fflush(stdin);
		scanf("%d",&a[i]);


	}
	printf("Enter the element to be searched:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&e);

	for(i=0;i<x;i++){
		if (a[i]==e){
			printf("number found at  location = %d",i+1);

		}

	}
	return 0;
}