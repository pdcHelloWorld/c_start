#include <stdio.h>
#include <stdlib.h>

int maxf(const int (*matrix)[3], int row);
int main() {
    int a[3][3] = {
        {1, 9, 6},
        {3, 8, 7},
        {4, 6, 2}
    };

    for (int i = 0; i < 3; ++i) {
        int max = maxf(a, i);
        printf("Max in row %d: %d\n", i + 1, max);
    }
    system("pause");
    getchar();
    return 0;
}


int maxf(const int (*matrix)[3], int row) {
    int max = matrix[row][0];
    for (int i = 1; i < 3; ++i) {
        if (matrix[row][i] > max) {
            max = matrix[row][i];
        }
    }

    return max;
}
