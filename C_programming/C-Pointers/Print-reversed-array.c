/******************************************************/
/* Author    : Mohammed Abdullah                      */
/* Date      : Oct 28, 2020                           */
/* Github    : @Mo3bdlaa                              */
/******************************************************/

#include <stdio.h>

int main ()
{
    int arr[15];
    int *ptr = NULL;
    unsigned int len;
    
	printf ("input the number of array elements: ");
    scanf ("%d", &len);
    
	for (int i = 0; i < len; i++)
    {
      printf ("element-%d: ", i+1);
      scanf ("%d", &arr[i]);
    }

    printf ("The elements of array ( reverse ) are : \n");
    for (ptr = (arr + len)-1; ptr >= arr; ptr--)
        printf ("element -%d : %d\n",(int) (ptr-arr+1),*ptr);
    return 0;
}