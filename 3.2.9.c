#include <math.h>
#include <stdio.h>                     //����Ԥ��������
void main()                            //������
{                                      //�����Ŀ�ʼ
	int n,i;
	double sum,x,temp,pow;             //�������sum,xΪ˫����
	double fact(int a);
    printf("������һ����������");
	scanf("%d",&n);                    //����ָ��
	printf("������һ��ʵ����");
	scanf("%lf",&x);                   //�������
	sum=0;
    for (i=1;i<=n;i++)
	{
		pow=fact(i);
		temp=(power(x,i))/pow;
		sum=sum+temp; 
	}
	printf("x=%f,n=%f,sum=0.2f\n",x,n,sum);//���
}                                      //�����Ľ���
double fact(int i)                 //������n!�ĺ���
{
	int a;
	double pow=1;                    //����pow��Ŵη�
	for(a=1;a<=i;a++)                  //ʹ��forѭ������xn
		pow=pow*a;
	return pow; 
}