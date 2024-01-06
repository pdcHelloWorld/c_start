#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[3][100];
	char temp[100];//临时字符串
	printf("输入三本书名：");
	int i,j=0;
	for(i=0;i<3;i++){
		scanf("%s",str[i]);
	}
	//排序
	for(i=0;i<2;i++){
		for(j=0;j<2-i;j++){
			if(strcmp(str[j],str[j+1])<0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	} 
	//排完了
	printf("倒序输出：\n");
	for (i=0;i<3;i++){
		printf("%s\n",str[i]);
	}
	getchar();
	system("pause");
	return 0; 
}
