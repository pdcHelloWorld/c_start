#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[3][100];
	char temp[100];//��ʱ�ַ���
	printf("��������������");
	int i,j=0;
	for(i=0;i<3;i++){
		scanf("%s",str[i]);
	}
	//����
	for(i=0;i<2;i++){
		for(j=0;j<2-i;j++){
			if(strcmp(str[j],str[j+1])<0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	} 
	//������
	printf("���������\n");
	for (i=0;i<3;i++){
		printf("%s\n",str[i]);
	}
	getchar();
	system("pause");
	return 0; 
}
