
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include<stdio.h>

int main(){
	int i,x,e,l;
	int a[20] ;

	printf("Enter the numbers of elements:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);

	for(i=0;i<x;i++){

		fflush(stdout);fflush(stdin);
		scanf("%d",&a[i]);


	}
	printf("Enter the element to be inserted:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&e);
	printf("Enter the location:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&l);
	for(i=x;i>=l;i--){
		a[i]=a[i-1];
	}
	a[l-1]=e;
	for(i=0;i<x+1;i++){

		printf("%d",a[i]);
	}
	return 0;
}