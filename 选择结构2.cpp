#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if (a+b>c&&a+c>b&&b+c>a){
	printf("�ܹ���������");
	if (a==b&&b==c){
		printf("�ǵȱ�������");
	}
	if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a){
		printf("�ǵ���������"); 
	}
	if (a!=b&&b!=c&&a!=c){
		printf("һ��������"); 
	}
	}
		
	else{
	printf("���ܹ���������");}
	
system("pause");
getchar();	 
}
