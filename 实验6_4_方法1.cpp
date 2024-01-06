#include <stdio.h>
#include <stdlib.h>

int maxf(const int *matrix, int row, int col);//二维数组、行、列

int main() {
    int a[3][3] = {
        {1, 9, 6},
        {3, 8, 7},
        {4, 6, 2}
    };
    for (int i = 0; i < 3; ++i) {
        int max = maxf(&a[i][0], 1, 3);  // 传递每行的起始地址和列数
        printf("Max in row %d: %d\n", i + 1, max);
    }
    system("pause");
    getchar();
    return 0;
}


int maxf(const int *matrix, int row, int col) {
    int max = *matrix;
    for (int i = 1; i < col; ++i) {
        if (*(matrix + i) > max) {
            max = *(matrix + i);
        }
    }

    return max;
}
