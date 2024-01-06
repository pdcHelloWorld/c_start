#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//输出最长字符串
void f1(char **str){
	int maxlen=0;
	char *maxstr=str[0];
	for (int i=0;i<5;++i){
		int len=strlen(str[i]);
		if (len>maxlen){
			maxlen=len;
			maxstr=str[i];
		}
	}
	printf("maxstring:%s\n",maxstr);
}
//输出含a字符串
void f2(char **str){
	int found=0;
	for (int i=0;i<5;++i){
		if (strchr(str[i],'a')!=NULL){
			printf("include 'a':%s\n",str[i]);
			found=1;
		}
		else if (found==0) printf("not found\n");
	}
}
//按长度排序
void f3(char **str){
	char *temp;
	int i,j,k;
	for (int i=0;i<4;++i){
		k=i;
		for(j=i+1;j<5;j++)
		    if (strlen(str[k])>strlen(str[j])) k=j;
		if (k!=i){
			temp=str[i];
			str[i]=str[k];
			str[k]=temp;
		}
		}
	}

int main(){
	char *str[5];
	for (int i=0;i<5;++i){
		printf("input strings %d: ",i+1);
		str[i] = (char *)malloc(10* sizeof(char));
		scanf("%s",str[i]);
	}
	f1(str);
	f2(str);
	f3(str);
	for (int i=0;i<5;++i){
		printf("%s\n",str[i]);
	}
	for (int i = 0; i < 5; ++i) {
        free(str[i]);
        str[i]=NULL;
}
	system("pause");
	getchar();
	return 0;	
}
