#include <stdio.h>
#include <math.h>
#define PI 3.1415926 //PI����Ϊ���ų���
void main ()
{
  double r;
  double s;
  printf("Please put in your r:");
  scanf("%lf",&r); //����r
  s=PI*r*r;
  printf("PI=%9.7f,r=%lf\ns=%lf\n",PI,r,s); //���������PI��r��s
}
//��˼��1��floatĬ�������λС����ֻ��ָ�����ݿ�Ⱥ�С��λ��������׼ȷ�������λС����PI;2������ĺ�PIû��ָ���������ͣ���Ĭ��Ϊdouble�ͣ��������涨�����ʱҲҪ��Ӧ����double
