#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if (a+b>c&&a+c>b&&b+c>a){
	printf("能构成三角形");
	if (a==b&&b==c){
		printf("是等边三角形");
	}
	if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a){
		printf("是等腰三角形"); 
	}
	if (a!=b&&b!=c&&a!=c){
		printf("一般三角形"); 
	}
	}
		
	else{
	printf("不能构成三角形");}
	
system("pause");
getchar();	 
}
