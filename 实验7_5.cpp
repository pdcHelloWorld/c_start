#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
void fun(char *input, int *output, int *count);
int main() {
    char str1[100], str2[100], str3[100];
    printf("�������ַ���1��");
    scanf("%s", str1);
    printf("�������ַ���2��");
    scanf("%s", str2);
    printf("�������ַ���3��");
    scanf("%s", str3);
    int result[100];  
    int count = 0;   
    fun(str1, result, &count);
    fun(str2, result, &count);
    fun(str3, result, &count);
    for (int i = 0; i < count; i++) {
        printf("a[%d]=%d ", i, result[i]);
    }
    system("pause");
    getchar();
	return 0;
}

void fun(char *input, int *output, int *count) {
    int num = 0;
    while (*input) {
        if ((*input)>='0'&&(*input)<='9') {
            num = num * 10 + (*input - '0');
        } else {
            if (num != 0) {
                output[(*count)++] = num;
                num = 0;
            }
        }
        input++;
    }

    if (num != 0) {
        output[(*count)++] = num;
    }
}
