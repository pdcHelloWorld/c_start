#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[]={2,4,6,8,10};
	printf("�����������");
	int i,k;int b[6],j=0;
	scanf ("%d",&k);
	for(i=0;i<5;i++){
		if(a[i]==k){
			printf("exist\n");
			goto leap;
		}
	}
	
	for(i=0;i<5;i++){
		if(a[i]<k){
			b[j]=a[i];
			j++;
		}else{
			break;
			
		}
	}
	b[j]=k;
	j++;
	for(;i<5;i++){
		b[j]=a[i];
		j++;
	}
	printf("�����a[6]={");
	for(i=0;i<6;i++){
		printf("%d",b[i]);
		if(i<5){
			printf(",");
		}
			}
	printf("}\n");
	getchar();
	system("pause");
	return 0;
	
	leap:
	printf("�����");
}

	
	
	
	
	
	
	
	
	
	
