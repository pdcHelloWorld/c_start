#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[8],i=0;
	printf("8��������");
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	
	//��ʼð������
	int j,t;
	for (i=0;i<7;i++){
		for (j=0;j<7-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	
	printf("������ԭ����Ϊ��");
	for (i=0;i<8;i++){
		printf("%d",a[i]);
	}
	
    int k;
    printf("������Ҫɾ����������");
    scanf("%d", &k);

    int found = 0;
    int newsize = 0;

    // ִ��ɾ������
    for (int i = 0; i < 8; i++) {
        if (a[i] == k) {
            found = 1;
        } else {
            a[newsize++] = a[i];
        }
    }

    // ���ִ��ɾ���������
    if (found) {
        printf("ִ��ɾ��������飺");
        for (int i = 0; i < newsize; i++) {
            printf("%d", a[i]);
        }
        printf("\n");
    } else {
        printf("not found.\n");
    }
	
	getchar();
	system("pause");
	return 0;
	
}

