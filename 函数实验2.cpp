#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum,cha=0;
int ji=1;//ȫ�ֺͲ��
void calu(char str[], int *sum, int *cha, int *ji) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int num = str[i] - '0';
        *sum += num;
        *ji *= num;
        *cha -= num;
    }
}

int main() {
    char str[100];
    printf("����������");
    scanf("%s", str);
    calu(str, &sum, &cha, &ji);
    printf("�ͣ�%d\n", sum);
    printf("�%d\n", cha+2*(str[0]-'0'));
    printf("����%d\n", ji);

    getchar();
    system("pause");
    return 0;
}

