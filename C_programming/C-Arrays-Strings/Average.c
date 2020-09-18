
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include<stdio.h>

int main(){
	int i,x;
	float a[100],sum=0,Average ;

	printf("Enter the numbers of data:");
	scanf("%d",&x);

	for(i=0;i<x;i++){

		printf("%d.Enter number: ");
		scanf("%f",&a[i]);
		sum+=a[i];

	}
	Average=sum/x;
	printf("Average = %2.2f ",Average);

	return 0;
}