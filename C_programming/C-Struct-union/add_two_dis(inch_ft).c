
/*
 *
 *  Created on: Sep 30, 2020
 *      Author: Mohammed Abdullah
 *      Github: @Mo3bdlaa
 */
 
#include <stdio.h>
struct dist	{	float m_Foot;	float m_Inch;	};

struct dist getdis (char* number)
{
	struct dist distance;
	printf("Enter information for %s distance\n", number);
	printf("Enter feet: ");	 fflush(stdin);	 fflush(stdout);
	scanf("%f", &distance.m_Foot);
	printf("Enter inch: ");	 fflush(stdin);	 fflush(stdout);
	scanf("%f", &distance.m_Inch);
	return distance;
}

struct dist add_dis (struct dist D1, struct dist D2)
{
	struct dist sum;                 int increase;
	sum.m_Foot = D1.m_Foot + D2.m_Foot;	  sum.m_Inch = D1.m_Inch + D2.m_Inch;

	if (sum.m_Inch >= 12)
	{
		increase = (int) sum.m_Inch / 12;
		sum.m_Foot += increase;
		sum.m_Inch -= (increase * 12);
	}
	return sum;
}
int main (void)
{
	struct dist D1, D2, D;
	D1 = getdis ("1st");	D2 = getdis ("2nd");
	D  = add_dis (D1, D2);
	printf("Sum of distances = %.0f'-%.1f\"\n", D.m_Foot, D.m_Inch);
	return 0;
}