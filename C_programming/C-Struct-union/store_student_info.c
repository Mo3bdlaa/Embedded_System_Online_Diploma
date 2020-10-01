
/*
 *
 *  Created on: Sep 30, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>
struct stu
{
    char name[20];
    unsigned int roll;
    float marks;
};
struct stu s;
void enter_stu(struct stu*);
void disp_stu(struct stu);
int main()
{
    printf("Enter student info : ");
    enter_stu(&s);
    printf("Displaing info : ");
    disp_stu(s);
    return 0;
}

void enter_stu(struct stu* std)
{
    printf("\nEnter name:");
    scanf("%s",std->name);
    printf("Enter roll number:");
    scanf("%u",&(std->roll));
    printf("Enter marks:");
    scanf("%f",&(std->marks));
}
void disp_stu(struct stu std)
{
    printf("\nname: %s", std.name);
    printf("\nroll number: %u", std.roll);
    printf("\nmarks: %.2f", std.marks);
}