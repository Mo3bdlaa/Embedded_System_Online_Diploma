
/*
 * ex2.c
 *
 *  Created on: Aug 28, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */

#include <stdio.h>
void main(){
char c;
printf("Enter an alphabet: ");
scanf("%c", &c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='l'||c=='o'||c=='O'||c=='u'||c=='U'){
printf("%c is a vowel.",c);
}else{
printf("%cis a consonant.",c);
}
}
