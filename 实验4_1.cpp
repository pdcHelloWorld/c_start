#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[100],str2[100];
	int i=0;
	printf("��һ���ַ�����");
	scanf("%s",str1);
	printf("�ڶ����ַ�����");
	scanf("%s",str2);
	while(str2[i]!='\0'){
		str1[i]=str2[i];
		i++;
	}str1[i]='\0';
	printf("���ƺ�õ����ַ���:%s\n",str1);
	getchar();
	system("pause");
	return 0;
}

