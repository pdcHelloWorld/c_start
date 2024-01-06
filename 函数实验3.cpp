#include <stdio.h>
#include <stdlib.h>
void erjinzhi(int n) {
    if (n > 0) {
        erjinzhi(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);
    printf("二进制表示为: ");
    erjinzhi(num);
    system("pause");
	getchar();    
    return 0;
}
