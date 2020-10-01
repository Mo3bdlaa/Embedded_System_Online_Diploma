
/*
 *
 *  Created on: Sep 30, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>
#include <string.h>

struct comp{
    float real;
    float img;
};

struct comp z1,z2,sum;
void comp_in(struct comp*);
void comp_add(struct comp*,struct comp*,struct comp*);

int main(){
    printf("For first complex number");
    comp_in(&z1);
    printf("For second complex number");
    comp_in(&z2);
    comp_add(&z1,&z2,&sum);
    printf("Sum = %.1f+%.1fi",sum.real, sum.img);
    return 0;
}

void comp_in(struct comp* cmp){
    printf("\nEnter real and imaginary respectively:");
    scanf("%f %f",&(cmp->real),&(cmp->img));
}

void comp_add(struct comp* cmp1,struct comp* cmp2,struct comp* sum){
    sum->real = cmp1->real + cmp2->real;
    sum->img = cmp1->img + cmp2->img;
}
