#include<stdio.h>
#include<math.h>
void main()
{
	int ponum,numa,numb,numc;
	int count;
	count=1;
	printf("Please put in a num inside 100000:\n");
	scanf("%d",&ponum);
	numa=ponum;
	printf("The reorder : \n");
	while(numa/10!=0)
	{
		count++;
		numb=numa%10;
		printf("%d\n",numb);
		numa=numa/10;
	}
	numa=numb%10;
	printf("%d\n",numb);
	printf("Place is : %d\n",count);
	printf("The order : \n");
	while(ponum%10!=0)
	{
		numc=ponum/(int)pow(10,(count-1));
		printf("%d\n",numc);
		ponum=ponum%(int)pow(10,count-1);
		count--;
	}
}