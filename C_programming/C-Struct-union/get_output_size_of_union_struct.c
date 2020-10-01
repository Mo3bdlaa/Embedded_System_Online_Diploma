
/*
 *
 *  Created on: Sep 30, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

// The Output of this program :
//  size of union = 32
//  size of structure = 40

// The code :

#include<stdio.h>

union job{
  char name[32];
  float salary;
  int worker_no; 
}u;

struct job1{
  char name[32];
  float salary;
  int worker_no; 
}s;

int main(){
  printf("size of union = %d",sizeof(u));
  printf("\nsize of structure = %d",sizeof(s));
  return 0;
}



