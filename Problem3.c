#include<stdio.h>
#include"E:\Bootcamp Project\Project 3\Library.h"
#include"E:\Bootcamp Project\Project 3\Library.c"
int main()
{
	double area_under_A;
	
	area_under_A = find_area(20.077,11.598 , 26.526,90.138 , 23.674,32.579);
	
	printf("\nArea to be coloured black = %lf Square Units.",area_under_A);
	
	return(0);
}
