#include <stdio.h>
#include <stdlib.h>
int sushu(int num);
int sum(int num);
int find(int start);

int main() {
    int N;
    printf("������������N��");
    scanf("%d", &N);
    int result = find(N);
    printf("���ڵ���%d������x����x�ĸ�������֮��Ҳ������Ϊ��%d\n", N, result);
    
	system("pause");
    getchar();
    return 0;
}

// �ж�һ�����Ƿ�Ϊ����
int sushu(int num) {
    if (num < 2) {
        return 0; // ����
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // ����
        }
    }
    return 1; // ��
}

// ����һ�������ĸ�������֮��
int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// ������������������
int find(int start) {
    int current = start;

    while (1) {//ʼ��ѭ��
        if (sushu(current) && sushu(sum(current))) {
            return current;
        }
        // ��һ������
        current++;
    }
}
