#include <stdio.h>
#include <stdlib.h>

int fun(int num, int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            return 1; // ���ִ�����������
        }
    }
    return 0; // ���ֲ�������������
}

// ð������
void paixu(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[10], b[10], c[10];
    int count = 0;
    printf("����������a�е�10��������");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
    printf("����������b�е�10��������");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; ++i) {
        if (fun(a[i], b, 10) && !fun(a[i], c, count)) {
            c[count++] = a[i];
        }
    }
    if (count > 0) {
        paixu(c, count);
        printf("����������cΪ��");
        for (int i = 0; i < count; ++i) {
            printf("%d ", c[i]);
        }
    } else {
        printf("count=0");
    }
    system("pause");
    getchar();
    return 0;
}
