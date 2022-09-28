#include<stdio.h>
#include"E:\Bootcamp Project\Project 3\Library.h"
#include"E:\Bootcamp Project\Project 3\Library.c"

int main()
{
	double angle_at_chowk;
	
	angle_at_chowk = find_angle(5,1,2,3);
	
	printf("\nAngle at which these roads meets at 123 Chowk = %lf",angle_at_chowk);
	return(0);
}
