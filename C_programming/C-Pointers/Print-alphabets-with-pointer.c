/******************************************************/
/* Author    : Mohammed Abdullah                      */
/* Date      : Oct 28, 2020                           */
/* Github    : @Mo3bdlaa                              */
/******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char alphapet[27];
	char* p = alphapet;

	for(int i=0 ; i<26 ; i++){

		*(p+i)='a';
		p++;
	}
	p = alphapet;

	printf("The Alphabets are :\n");
	
	for(int i=0;i<26;i++){
		printf("%c ",*p);
		p++;
	}

}