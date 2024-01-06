#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int function(int n){
	char s[20];
	sprintf(s,"%d",n);//n转为字符串存入s
	int len=strlen(s);
	for (int i=0;i<len;i++){
		for (int j=0;j<len;j++){
			printf("*");
		}
		printf("%c",s[i]);
	} 
	printf("\n");
}
int main(){
	int n;
	printf("输入一个整数：");
	scanf("%d",&n);
	function(n);
	getchar();
	system("pause");
	return 0;
}
