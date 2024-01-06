#define M 2
#define N 4  
#include <stdio.h>
#include <stdlib.h>

void SumColumMin(int a[M][N],int *sum){
	*sum=0;
	int j=0;
	for (j=0;j<N;j++){
		int min=a[0][j];
		for (int i=1;i<M;i++){
		if(a[i][j]<min) min=a[i][j];
	}
	*sum+=min;}

	
}   

int main(){
	int  x[M][N]={3,2,5,1,4,1,8,3},s; 
    SumColumMin(x,&s);  
    printf("%d\n",s); 
    system("pause");
    getchar();
    return 0;
}  

