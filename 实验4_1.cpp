#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[100],str2[100];
	int i=0;
	printf("第一个字符串：");
	scanf("%s",str1);
	printf("第二个字符串：");
	scanf("%s",str2);
	while(str2[i]!='\0'){
		str1[i]=str2[i];
		i++;
	}str1[i]='\0';
	printf("复制后得到的字符串:%s\n",str1);
	getchar();
	system("pause");
	return 0;
}

