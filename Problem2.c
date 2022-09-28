#include<stdio.h>
#include"E:\Bootcamp Project\Project 3\Library.h"
#include"E:\Bootcamp Project\Project 3\Library.c"

int main()
{
	double distance;
	
	distance = find_distance(23.259933,77.412613,12.9716,77.5946);
	
	printf("\nDistance Between Saurabh Sir & Prateek Sir = %lf KM.",distance);
	
	return(0);
}
