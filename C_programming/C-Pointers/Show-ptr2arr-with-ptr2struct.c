/******************************************************/
/* Author    : Mohammed Abdullah                      */
/* Date      : Oct 28, 2020                           */
/* Github    : @Mo3bdlaa                              */
/******************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Semployee{
	char* name;
	int id;
};

int main(void) {

	struct Semployee emp1={"Mohammed",15},emp2={"Karam",24},emp3={"Abdullah",49};
	struct Semployee *arr[]={&emp1,&emp2,&emp3};
	struct Semployee*(*parr_emp)[3]= &arr;

	printf(" Emp. Name : %s \n",(*(*parr_emp))->name);
	printf(" Emp. ID   : %d \n",  (*(*parr_emp))->id);
	
}