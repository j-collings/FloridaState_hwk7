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

/* Function Prototypes */
void MaxMin(int numvals, int vals[], int max, int min);

/* Main Program */
int main(int argc, char *argv[])
{
	int numvals = 10;
	int vals[numvals];
	int max = 0;
	int min = 101;
	MaxMin(numvals, vals, max, min);
	return 0;
}

/* Function Definitions */
void MaxMin(int numvals, int vals[], int max, int min)
{
	printf("The list is: \n");
	srand(time(NULL));
	for (int i = 0; i <= numvals; i++)
	{
	vals[i] = 1 + (int)rand() % 100;
	printf("%d ", vals[i]);
	
	if (vals[i]>max)
	{
		max = vals[i];
	}
	if (vals[i]<min)
	{
		min = vals[i];
	}
	}

	printf("\nThe maximum value is: %d\nThe minimum value is: %d\n", max, min);

	return;
}
