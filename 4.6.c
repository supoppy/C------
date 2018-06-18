#include<stdio.h>
#include<math.h>
void main()
{
	double x;
	double y;
	printf("Please put in a num : ");
	scanf("%lf",&x);
	if(x<1)
	{
		y=x;
	}
	else if(x>=1&&x<10)
	{
		y=2*x-1;
	}
	else
	{
		y=3*x-11;
	}
	printf("y=%lf\n",y);
}