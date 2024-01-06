#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//倒序输出
void fun1(char *s){
	int len=strlen(s);
	for (int i=len-1;i>=0;i--){
		printf("%c",s[i]);
	}
}
//提取数字
void fun2(char *s, int *num, int *count) {
//num是一个唯一数字数组，count用于跟踪数组中唯一数字的数量
    while (*s != '\0') {
        if (*s >= '0' && *s <= '9') {
            int tiqu = *s - '0';//将字符表示的数字转换为相应整数
            // 检查是否已经存在于数组num中
            int e = 0;//e用来存储存在与否
            for (int i = 0; i < *count; i++) {
                if (num[i] == tiqu) {
                    e = 1;
                    break;
                }
            }
            // 如果不存在，则添加到数组中
            if (!e) {
                num[*count] = tiqu;
                (*count)++;//数字数量递增
            }
        }
        s++;
    }
}
//排序
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
    printf("请输入第一个字符串: ");
    gets(s1);
    printf("请输入第二个字符串: ");
    gets(s2);
    printf("请输入第三个字符串: ");
    gets(s3);

    printf("倒序输出第一个字符串：\n");
    fun1(s1);
    printf("\n倒序输出第二个字符串：\n");
    fun1(s2);
    printf("\n倒序输出第三个字符串：\n");
    fun1(s3);

    fun2(s1, num, &count);
    fun2(s2, num, &count);
    fun2(s3, num, &count);
    

    printf("\n排序后的数字：\n");
    fun3(num, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", num[i]);
    }
    system("pause");
    getchar();
    return 0;
}
