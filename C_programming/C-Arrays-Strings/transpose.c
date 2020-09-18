
/*
 *
 *  Created on: Sep 15, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include<stdio.h>

int main(){
	int i,j,x,y;
	float a[20][20],s[20][20];

	printf("Enter the columns and rows of the matrix :");
	fflush(stdout);fflush(stdin);
	scanf("%d\n%d",&x,&y);
	printf("Enter the element of the matrix:\n");

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[i][j]);

		}
	}

	printf("Entered  matrix is :\n");

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%2.0f\t",a[i][j]);
			fflush(stdout);fflush(stdin);

		}
		printf("\r\n");

	}

	printf("Transpose of matrix :\n");
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			s[i][j]=a[j][i];
			printf("%2.0f\t",s[i][j]);
		}
		printf("\r\n");

	}
	return 0;
}