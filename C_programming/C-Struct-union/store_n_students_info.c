
/*
 *
 *  Created on: Sep 30, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>

struct stu
{
	char m_Name[50];
	unsigned int m_Roll;
	unsigned int m_Marks;
};
struct stu ReadStruct (unsigned int rollNum)
{
	struct stu student;
	student.m_Roll = rollNum;
	printf("For roll number %d\n", rollNum);
	printf("Enter name: ");      fflush(stdin);	fflush(stdout);
	scanf("%s", student.m_Name);
	printf("Enter marks: ");     fflush(stdin);	fflush(stdout);
	scanf("%u", &student.m_Marks);
	return student;
}
void DisplayStruct (struct stu student)
{
	printf("\nInformation for roll number %u:\nName: %s\nMarks: %u\n", student.m_Roll, student.m_Name, student.m_Marks);
}
int main (void)
{
	int i;
	printf("Enter students info : \n\n")
	struct stu student[10];
	for (i = 0; i < 10; i++)	{ student[i] = ReadStruct(i+1); }
	printf("\nShow info : \n");
	for (i = 0; i < 10; i++)	{ DisplayStruct(student[i]); }
	return 0;
}