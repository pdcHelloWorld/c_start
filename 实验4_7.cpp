#include<stdio.h>
#include<stdlib.h>
int function(int from,int to){
	int count=0;
	int sum=0;
	for(int i=(from+1);i<to;i++){
		if(i%8!=0){
			count++;
			sum+=i;
		}
	}
	printf("%d %d\n",count,sum);
}
int main(){
	int from,to;
	printf("输入两个整数：");
	scanf("%d %d",&from,&to);
	function(from,to);
	getchar();
	system("pause");
	return 0;
}
