#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum,cha=0;
int ji=1;//全局和差积
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
    printf("输入整数：");
    scanf("%s", str);
    calu(str, &sum, &cha, &ji);
    printf("和：%d\n", sum);
    printf("差：%d\n", cha+2*(str[0]-'0'));
    printf("积：%d\n", ji);

    getchar();
    system("pause");
    return 0;
}

