#include <stdio.h>
#include <math.h>
#define PI 3.1415926 //PI定义为符号常量
void main ()
{
  double r;
  double s;
  printf("Please put in your r:");
  scanf("%lf",&r); //输入r
  s=PI*r*r;
  printf("PI=%9.7f,r=%lf\ns=%lf\n",PI,r,s); //分行输出，PI、r、s
}
//反思：1）float默认输出六位小数，只有指定数据宽度和小数位数，才能准确输出有七位小数的PI;2）定义的宏PI没有指明数据类型，则默认为double型，所以下面定义变量时也要相应的用double
