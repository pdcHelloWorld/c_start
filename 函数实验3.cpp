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
    printf("������һ��������");
    scanf("%d", &num);
    printf("�����Ʊ�ʾΪ: ");
    erjinzhi(num);
    system("pause");
	getchar();    
    return 0;
}
