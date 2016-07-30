#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int a,b,c,i,j,sel,wina,winb;
	wina=0,winb=0;
	printf("****************** 菜单选择 *******************\n");
	printf("**********1 人机模式；2人人模式；0退出*********\n");
	printf("***********                            ********\n");
	scanf("%d\n",&sel);
	switch(sel){
	case 1:{
    printf("0表示石头，1表示剪刀，2表示布\n");
		for(j=1;j<4;i++){
	for(i=1;i<4;i++){
	scanf("%d\n",&a);
	else if(a==0){
			printf("人输入的是石头\n");}
	else if(a==1){
			printf("人输入的是剪刀\n");}
	else { printf("人输入的是布\n");}

	srand ((unsigned)time(NULL));
	b=rand()%3; //随机生成0、1、2
	if(b==0){
			printf("电脑输入的是石头\n");}
	else if(b==1){
			printf("电脑输入的是剪刀\n");}
	else if(b==2) { printf("电脑输入的是布\n");}
	c=a-b;
	switch(c){
		    case 0:printf("平手!加油ing！\n");break;
			case -1:case 2:printf("赢了，不错哦\n");wina++;break;
			case -2:case 1:printf("输了，不是吧\n");winb++;break;
		}
	 
	}
	if(wina>winb){
	printf("帅哥，赢了，赢了\n");break;}
	else if (wina==winb) {
		printf("帅哥，平局！继续。。。\n");}
	else printf("帅哥，这都能输，太遗憾了\n");break;
	if(j==4)
		printf("帅哥，玩这么就都赢不了你，别玩了！\n");
	}
		   } 
	case 2:break;
default:
  	   printf("输入错误\n");break;}
}