#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[8],i=0;
	printf("8个整数：");
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	
	//开始冒泡排序
	int j,t;
	for (i=0;i<7;i++){
		for (j=0;j<7-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];a[j]=a[j+1];a[j+1]=t;
			}
		}
	}
	
	printf("排序后的原数组为：");
	for (i=0;i<8;i++){
		printf("%d",a[i]);
	}
	
    int k;
    printf("请输入要删除的整数：");
    scanf("%d", &k);

    int found = 0;
    int newsize = 0;

    // 执行删除操作
    for (int i = 0; i < 8; i++) {
        if (a[i] == k) {
            found = 1;
        } else {
            a[newsize++] = a[i];
        }
    }

    // 输出执行删除后的数组
    if (found) {
        printf("执行删除后的数组：");
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

