
/*
 *
 *  Created on: Sep 30, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>
#define area(r) (3.1415*(r)*(r))

int main(){
    int radius=0;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    printf("\nArea: %.2f", area(radius));
}