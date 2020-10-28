/******************************************************/
/* Author    : Mohammed Abdullah                      */
/* Date      : Oct 28, 2020                           */
/* Github    : @Mo3bdlaa                              */
/******************************************************/

#include <stdio.h>

int main()
{
    int m = 29;
    int *ab = NULL;
    
	printf("Adress of m : 0x%lx\n",(long unsigned int)&m);
    printf("Value of m: %d\n", m);
    
	ab = &m ;
    
	printf("Now ab is assigned with the adress of m.\n");
    printf("Adress of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d\n", *ab);
    
	m =34;
    
	printf("The value of m assigned to 34 now. \n");
    printf("Adress of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d\n", *ab);
    
	*ab =7;
    
	printf("The pointer variable ab is assigned with the value 7 now. \n");
    printf("Adress of m : %p\n",&m);
    printf("Value of m : %d\n", m);
    
	return 0;
}