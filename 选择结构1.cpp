#include <stdio.h>
#include <stdlib.h>
int main(){

float a=0.0,b=0.0;
char choice;
printf("number1=");
scanf("%f",&a);
printf("number2=");
scanf("%f",&b);
printf("your choice is");
scanf(" %c",&choice);

switch(choice){
	case'+':
		printf("%.2f+%.2f=%.2f\n",a,b,a+b);
		break;
	case'-':
		printf("%.2f-%.2f=%.2f\n",a,b,a-b);
		break;
	case'*':
		printf("%.2f*%.2f=%.2f\n",a,b,a*b);
		break;
	case'/':
		if(b!=0){printf("%.2f/%.2f=%.2f\n",a,b,a/b);
		}
		else{
			printf("除数不能为0"); 
		}
		break;
	default:
	printf("error") ;
	break;
}
system("pause");
getchar();
return 0;
}
