#include<stdio.h>
#include<stdlib.h>
int sub(int m, int n) {
    return m % n == 0;
}

int main() {
    int m = 0, k, a0, a1, a2, count = 0;
  
    for (k = 105; k <= 995; k++) {
        a0 = k % 10;//个位
        a1 = (k / 10) % 10;//十位
        a2 = k / 100;//百位

        if (sub(k, 3) && (a0 == 5 || a1 == 5 || a2 == 5)) {
            printf("%d ", k);
            m=m+1;
            count++;
        }
    }
    printf("\n个数: %d\n", count);
    
    system("pause");
    getchar();
    return 0;
}
