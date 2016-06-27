#include <math.h>
#include <stdio.h>                     //编译预处理命令
void main()                            //主函数
{                                      //函数的开始
	int n,i;
	double sum,x,temp,pow;             //定义变量sum,x为双精度
	double fact(int a);
    printf("请输入一个正整数：");
	scanf("%d",&n);                    //输入指数
	printf("请输入一个实数：");
	scanf("%lf",&x);                   //输入底数
	sum=0;
    for (i=1;i<=n;i++)
	{
		pow=fact(i);
		temp=(power(x,i))/pow;
		sum=sum+temp; 
	}
	printf("x=%f,n=%f,sum=0.2f\n",x,n,sum);//输出
}                                      //函数的结束
double fact(int i)                 //定义求n!的函数
{
	int a;
	double pow=1;                    //变量pow存放次方
	for(a=1;a<=i;a++)                  //使用for循环计算xn
		pow=pow*a;
	return pow; 
}