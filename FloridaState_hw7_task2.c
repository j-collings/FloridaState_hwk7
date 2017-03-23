/*
 * =====================================================================================
 *
 *       Filename:  FloridaState_hw7_task2.c
 *       	Usage:  ./FloridaState_hw7_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2017 05:48:00 AM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Sherry Masutani (), sherrymasutani@mail.weber.edu
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VALS 10
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int *min, int *max);

/* Main Program */
int main(int argc, char *argv[])
{
	int array[VALS];
	int max = 0, min = 0;
	MaxMin(VALS, array, &min, &max);

	return 0;
}

/* Function Definitions */
void MaxMin(int numvals, int vals[], int *min, int *max)
{
	//seed a random number
	srand((unsigned)time(NULL));

	printf("The list is: ");
	for (int i = 0; i < numvals; i++)
	{
		vals[i] = 1 + (int) (rand() % (100 - 1));
		printf(" %d", vals[i]);

		if( i == 0)
		{
			*max = vals[0];
			*min = vals[0];
		}
		if(vals[i] > *max)
		{
			*max = vals[i];
		}
		else if (vals[i] < *min)
		{
			*min = vals[i];
		}
	}
	printf("\nThe maximum value is: %d\nThe minimum value is: %d\n", *max, *min);

	return;
}
