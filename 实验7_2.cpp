#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void han1(char *x){
	int result = 0;
	for (int i=0;i<4;++i){
		int a=x[i]-'0';
		result+=a*pow(2,4-i);
	}
	printf("���ʽ���Ϊ%d",result);
}
void han2(char *x){
	for (int i=0;i<4;++i){
		printf("%c",x[i]);
		for (int k=0;k<=i;++k){
		printf("#");
		}
	}
}
int main(){
	int choice;
	char x[4];
	void (*fun)(char *);
	printf("choice:");
	scanf("%d",&choice);
	if (choice==1) {
		fun=han1;
		printf("�����ĸ������ַ���");
	}
	else if(choice==2) {
		fun=han2;
		printf("�����ĸ���ĸ��");
	}
	scanf("%s",x);
	fun(x);
	system("pause");
	getchar();
	return 0;
}