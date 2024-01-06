#include<stdio.h>
#include<stdlib.h>

//判断素数
int a1(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}

//分解数字
void a2(int n,int *bai,int *shi,int *ge){
	*bai=n/100;
	*shi=(n/10)%10;
	*ge=n%10;
}

//两数交换
void a3(int *p1,int *p2,int n){
	if (a1(n)){
		*p1=n%10;//个位
		*p2=(n/10)%10;//十位
	}else{
		*p1=n%10;//个位
		*p2=n/100;//百位
	}
}

int main(){
	int n,bai,shi,ge,p1,p2;
	printf("enter a number:");
	scanf("%d",&n);
	a2(n,&bai,&shi,&ge);
	if(a1(n)){
		printf("%d是素数\n",n);
		a3(&p1,&p2,n);
	    printf("变换后的数为%d%d%d\n",bai,p1,p2);
	}else{
		printf("%d不是素数\n",n);
		a3(&p1,&p2,n);
	    printf("变换后的数为%d%d%d\n",p1,shi,p2);
	}
	printf("bai=%d,shi=%d,ge=%d\n",bai,shi,ge);
	system("pause");
	getchar();
	return 0;	
}