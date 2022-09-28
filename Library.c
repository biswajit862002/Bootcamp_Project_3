#include<math.h>


//Problem 1

double find_angle(double a1,double b1,double a2,double b2)
{
	double c;
	
	c=(a1*a2 + b1*b2) / ((sqrt(pow(a1,2) + pow(b1,2))) * (sqrt(pow(a2,2) + pow(b2,2))));
         
    return(c);    
}


//	Problem 2

double d;

double find_distance(double l1,double g1,double l2,double g2)
{
	if(l1 != l2 && g1 != g2)
	{
		l1 = l1 * 3.14 / 180;
		l2 = l2 * 3.14 / 180;
		g1 = g1 * 3.14 / 180;
		g2 = g2 * 3.14 / 180;
	
		d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));
	
		printf("\nDistance Between Saurabh Sir & Prateek Sir = %lf Miles.",d);
	
		d = d * 1.609;
	
		return(d);
	}
	else
	{
		printf("\nPlease Enter Different Latitude & Longitude values...!");
	}	
}



//	Problem 3

double find_area(double x1,double y1, double x2,double y2,double x3,double y3)
{
	double area;
	
	area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
	
	if(area < 0)
	{
		area = -area;
	}
	
	return(area);
}


