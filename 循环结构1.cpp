#include <stdio.h>
#include <stdlib.h> 
    int main(){
    int s=0;
    int i;
    for(i=1;i<=100;i++){
        if(i % 3 == 0 && i % 5 ==0){
            s=s+i;
        }
    }
    
    printf("s=%d",s);
    system("pause");
    getchar();
    return 0;
}

