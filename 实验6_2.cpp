#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�������
void fun1(char *s){
	int len=strlen(s);
	for (int i=len-1;i>=0;i--){
		printf("%c",s[i]);
	}
}
//��ȡ����
void fun2(char *s, int *num, int *count) {
//num��һ��Ψһ�������飬count���ڸ���������Ψһ���ֵ�����
    while (*s != '\0') {
        if (*s >= '0' && *s <= '9') {
            int tiqu = *s - '0';//���ַ���ʾ������ת��Ϊ��Ӧ����
            // ����Ƿ��Ѿ�����������num��
            int e = 0;//e�����洢�������
            for (int i = 0; i < *count; i++) {
                if (num[i] == tiqu) {
                    e = 1;
                    break;
                }
            }
            // ��������ڣ�����ӵ�������
            if (!e) {
                num[*count] = tiqu;
                (*count)++;//������������
            }
        }
        s++;
    }
}
//����
void fun3(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    char s1[100], s2[100], s3[100];
    int num[300];
    int count=0;
    printf("�������һ���ַ���: ");
    gets(s1);
    printf("������ڶ����ַ���: ");
    gets(s2);
    printf("������������ַ���: ");
    gets(s3);

    printf("���������һ���ַ�����\n");
    fun1(s1);
    printf("\n��������ڶ����ַ�����\n");
    fun1(s2);
    printf("\n��������������ַ�����\n");
    fun1(s3);

    fun2(s1, num, &count);
    fun2(s2, num, &count);
    fun2(s3, num, &count);
    

    printf("\n���������֣�\n");
    fun3(num, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", num[i]);
    }
    system("pause");
    getchar();
    return 0;
}
