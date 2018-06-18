#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,min,station;
	int a[11];
	printf("Please input ten numbers~\n");
	for (i=1;i<=10;i++)
	 {printf("a[%d]=",i);
	  scanf("%d",&a[i]);
	  }
	printf("The orginal numbers are\n");
	for (i=1;i<=10;i++)
	 printf("%5d",a[i]);
	 printf("\n");
	for (i=1;i<=9;i++)
	 {min=i;
	  for (j=i+1;j<=10;j++)
	  if(a[min]>a[j])
	   min=j;
	   station=a[i];
	   a[i]=a[min];
	   a[min]=station;
	 }
	printf("The ending numbers are\n");
	for(i=1;i<=10;i++)
	 printf("%5d",a[i]);
	return 0;
}
