#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int a,b,c,i,j,sel,wina,winb;
	wina=0,winb=0;
	printf("****************** �˵�ѡ�� *******************\n");
	printf("**********1 �˻�ģʽ��2����ģʽ��0�˳�*********\n");
	printf("***********                            ********\n");
	scanf("%d\n",&sel);
	switch(sel){
	case 1:{
    printf("0��ʾʯͷ��1��ʾ������2��ʾ��\n");
		for(j=1;j<4;i++){
	for(i=1;i<4;i++){
	scanf("%d\n",&a);
	else if(a==0){
			printf("���������ʯͷ\n");}
	else if(a==1){
			printf("��������Ǽ���\n");}
	else { printf("��������ǲ�\n");}

	srand ((unsigned)time(NULL));
	b=rand()%3; //�������0��1��2
	if(b==0){
			printf("�����������ʯͷ\n");}
	else if(b==1){
			printf("����������Ǽ���\n");}
	else if(b==2) { printf("����������ǲ�\n");}
	c=a-b;
	switch(c){
		    case 0:printf("ƽ��!����ing��\n");break;
			case -1:case 2:printf("Ӯ�ˣ�����Ŷ\n");wina++;break;
			case -2:case 1:printf("���ˣ����ǰ�\n");winb++;break;
		}
	 
	}
	if(wina>winb){
	printf("˧�磬Ӯ�ˣ�Ӯ��\n");break;}
	else if (wina==winb) {
		printf("˧�磬ƽ�֣�����������\n");}
	else printf("˧�磬�ⶼ���䣬̫�ź���\n");break;
	if(j==4)
		printf("˧�磬����ô�Ͷ�Ӯ�����㣬�����ˣ�\n");
	}
		   } 
	case 2:break;
default:
  	   printf("�������\n");break;}
}