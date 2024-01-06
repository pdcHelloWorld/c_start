#include <stdio.h>
#include <stdlib.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n * n + sum(n - 1);
    }
}

int main() {
    int n = 3; 
    int result = sum(n);
    printf("%d\n", result);
    
    system("pause");
    getchar();
    return 0;
}
