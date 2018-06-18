#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//求一个3x3的整数矩阵对角线元素之和

int main(int argc, char *argv[]) {
	int matrix[3][3];
	int sum;
	int N1,N2,N3,N4,N5;
	int i,j;
	int m;
	m=0;
	sum=0;
	printf("Please input the matrix:\n");
	for(i=0;i<3;i++)
	 {
	  for(j=0;j<3;j++)
       {
	    scanf("%d",&matrix[i][j]);
 	   }
     }
    sum=matrix[0][0]+matrix[0][2]+matrix[1][1]+matrix[1][1]+matrix[2][0]+matrix[2][2];
	printf("The sum is %d",sum);
	return 0;
}
