/*
 * =====================================================================================
 *
 *       Filename:  FloridaState_hw7_task1.c
 *       	Usage:  ./FloridaState_hw7_task1.c
 *    Description:  Copy contents of an array
 *
 *        Version:  1.0
 *        Created:  03/23/2017 02:03:50 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>

#define LEN 5

/* Function Prototypes */
void show_arr(const double ar[], double n);
void copy_arr(double ar1[], const double ar2[], int n);
void copy_ptr(double *ar1, const double *ar2, int n);
void copy_ptrs(double *ar2, const double *start, const double *end);

/* Main Program */
int main(int argc, char *argv[])
{
	const double source [LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[LEN];
	double target2[LEN];
	double target3[LEN];

	printf("source array: ");
	show_arr(source, LEN);
	copy_arr(target1, source, LEN);
	printf("\ncopied by subscript: ");
	show_arr(target1, LEN);
	copy_ptr(target2, source, LEN);
	printf("\ncopied by pointer: ");
	show_arr(target2, LEN);
	copy_ptrs(target3, source, source + 5);
	printf("\ncopied using pointer range: ");
	show_arr(target3, LEN);

	return 0;
}


/* Function Definitions */
void show_arr(const double ar[], double n)
{
	for(int count = 0; count < n; count ++)
	{
		printf("%.1lf ", ar[count]);
	}
	printf("\n");
	return;
}

void copy_arr(double ar1[], const double ar2[], int n)
{
	for(int i = 0; i < n; i++)
	{
		ar1[i] = ar2[i];
	}
	return;
}


void copy_ptr(double *ar1, const double *ar2, int n)
{
	for(int count = 0; count < n; count++)
	{
		*ar1 = *ar2;
		ar1++;
		ar2++;
	}
	return;
}


void copy_ptrs(double *ar2, const double *start, const double *end)
{
	while (start != end)
	{
		*ar2 = *start;
		ar2++;
		start++;
	}
	return;
}
