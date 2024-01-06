#include <stdio.h>
#include <stdlib.h>

double sum(int n){
	double s=0.0;
	for (int i=1;i<=n;i++){
	    static double fenmu=0.0;
		fenmu+=i;
		s+=1.0 / fenmu;
	}
	return s;
}
int main(){
	int n;
	printf("ÊäÈënµÄÖµ£º");
	scanf("%d",&n);
	double s=sum(n);
	printf("%lf",s);
	
	system("pause");
	getchar();
	return 0;
}



