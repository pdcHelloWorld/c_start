#include <stdio.h>
#include <stdlib.h>
int sushu(int num);
int sum(int num);
int find(int start);

int main() {
    int N;
    printf("请输入正整数N：");
    scanf("%d", &N);
    int result = find(N);
    printf("大于等于%d的素数x，且x的各个数字之和也是素数为：%d\n", N, result);
    
	system("pause");
    getchar();
    return 0;
}

// 判断一个数是否为素数
int sushu(int num) {
    if (num < 2) {
        return 0; // 不是
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // 不是
        }
    }
    return 1; // 是
}

// 计算一个整数的各个数字之和
int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// 查找满足条件的素数
int find(int start) {
    int current = start;

    while (1) {//始终循环
        if (sushu(current) && sushu(sum(current))) {
            return current;
        }
        // 下一个素数
        current++;
    }
}
