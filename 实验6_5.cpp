#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *f1(char *s, char ch1, char ch2, char *result) {
    int start=0, end=0;
    int len = 0;

    // 查找开始字符的位置
    while (s[len] != '\0') {
        if (s[len] == ch1) {
            start= len;
            break;
        }
        len++;
    }

    // 查找结束字符的位置
    while (s[len] != '\0') {
        if (s[len] == ch2) {
            end= len;
            break;
        }
        len++;
    }

    if (start!=0 && end!=0) {
        int a= end-start+ 1;
        strncpy(result, s + start, a);
        result[a] = '\0';
    } else {
        result[0] = '\0';
    }
    return 0;
}

int main() {
    char input[100];
    char result[100];
    char ch1, ch2;
    printf("请输入字符串: ");
    gets(input);
    printf("请输入开始字符: ");
    scanf(" %c", &ch1);
    printf("请输入结束字符: ");
    scanf(" %c", &ch2);
    f1(input, ch1, ch2, result);
    printf("结果字符串: %s\n", result);
    system("pause");
    getchar();
    return 0;
}
