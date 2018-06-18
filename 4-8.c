#include<stdio.h>
void main()
{
	int score;
	printf("Please put in the score:\n");
	scanf("%d",&score);
	switch(score/10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:printf("The grade is : E\n");break;
    case 6:printf("The grade is : D\n");break;
    case 7:printf("The grade is : C\n");break;
	case 8:printf("The grade is : B\n");break;
	case 9:printf("The grade is : A\n");break;
	case 10:printf("The grade is : A\n");break;
	}
}