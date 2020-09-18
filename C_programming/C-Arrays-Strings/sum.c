
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include<stdio.h>

int main(){
	int i,j;
	float a[2][2],b[2][2],s[2][2] ;
	printf("Enter the element of the 1st matrix:\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[i][j]);

		}
	}
	printf("Enter the element of the 2st matrix:\n");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&b[i][j]);

		}
	}
	printf("sum of matrix :\n ");

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			s[i][j]=a[i][j]+b[i][j];
			printf("%2.1f\t",s[i][j]);

		}

		printf("\n");
	}
	return 0;
}