/*
 * ex4.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */


#include<stdio.h>  //importing stdio library

void main(){

    float x, y, ans;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);        // Stores the two floating numbers in variables x and y
    ans = x * y;  //Performs multiplication and stores it
    printf("The Answer is: %f",ans);

}
