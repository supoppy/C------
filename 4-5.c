#include<stdio.h>
#include<math.h>
void main()
{
	int ponum;
	double sqroot;
	printf("Please put in a num which inside 1000 : ");
	scanf("%d",&ponum);
	if(ponum>0&&ponum<1000)
	{
		sqroot=sqrt(ponum);
		printf("The square root is:%2.0f\n",sqroot);
	}
	else
		printf("Please change the num.\n");
}
