#include<stdio.h>
#include<math.h>
void main()
{
	int i1,i2,i3,i4,transnum;
	printf("Please put in four intengers and separate them as\"a,b,c,d\":");
	scanf("%d,%d,%d,%d",&i1,&i2,&i3,&i4);
	if(i1>i2)
	{
		transnum=i1;
		i1=i2;
		i2=transnum;
	}
	if(i1>i3)
	{
		transnum=i1;
		i1=i3;
		i3=transnum;
	}
	if(i1>i4)
	{
		transnum=i1;
		i1=i4;
		i4=transnum;
	}
	if(i2>i3)
	{
		transnum=i2;
		i2=i3;
		i3=transnum;
	}
	if(i2>i4)
	{
		transnum=i2;
		i2=i4;
		i4=transnum;
	}
	if(i3>i4)
	{
		transnum=i3;
		i3=i4;
		i4=transnum;
	}
	printf("%d,%d,%d,%d\n",i1,i2,i3,i4);
}