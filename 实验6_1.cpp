#include<stdio.h>
#include<stdlib.h>

//�ж�����
int a1(int n){
	for (int i=2;i*i<=n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}

//�ֽ�����
void a2(int n,int *bai,int *shi,int *ge){
	*bai=n/100;
	*shi=(n/10)%10;
	*ge=n%10;
}

//��������
void a3(int *p1,int *p2,int n){
	if (a1(n)){
		*p1=n%10;//��λ
		*p2=(n/10)%10;//ʮλ
	}else{
		*p1=n%10;//��λ
		*p2=n/100;//��λ
	}
}

int main(){
	int n,bai,shi,ge,p1,p2;
	printf("enter a number:");
	scanf("%d",&n);
	a2(n,&bai,&shi,&ge);
	if(a1(n)){
		printf("%d������\n",n);
		a3(&p1,&p2,n);
	    printf("�任�����Ϊ%d%d%d\n",bai,p1,p2);
	}else{
		printf("%d��������\n",n);
		a3(&p1,&p2,n);
	    printf("�任�����Ϊ%d%d%d\n",p1,shi,p2);
	}
	printf("bai=%d,shi=%d,ge=%d\n",bai,shi,ge);
	system("pause");
	getchar();
	return 0;	
}