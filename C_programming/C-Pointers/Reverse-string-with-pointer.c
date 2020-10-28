/******************************************************/
/* Author    : Mohammed Abdullah                      */
/* Date      : Oct 28, 2020                           */
/* Github    : @Mo3bdlaa                              */
/******************************************************/

#include <stdio.h>

int main (){
	
  char text[50];
  char *ptr = NULL;
  
  printf("input a texting : ");
  scanf("%s", text);
  for (ptr = text; *ptr != '\0'; ptr++);
  
  printf("Reverse of the texting : ");
  for (; ptr >= text; ptr--) printf("%c", *ptr);
  
  return 0;

}
