#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *f1(char *s, char ch1, char ch2, char *result) {
    int start=0, end=0;
    int len = 0;

    // ���ҿ�ʼ�ַ���λ��
    while (s[len] != '\0') {
        if (s[len] == ch1) {
            start= len;
            break;
        }
        len++;
    }

    // ���ҽ����ַ���λ��
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
    printf("�������ַ���: ");
    gets(input);
    printf("�����뿪ʼ�ַ�: ");
    scanf(" %c", &ch1);
    printf("����������ַ�: ");
    scanf(" %c", &ch2);
    f1(input, ch1, ch2, result);
    printf("����ַ���: %s\n", result);
    system("pause");
    getchar();
    return 0;
}
