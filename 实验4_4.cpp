#include<stdio.h>
#include<stdlib.h>
int sub(int m, int n) {
    return m % n == 0;
}

int main() {
    int m = 0, k, a0, a1, a2, count = 0;
  
    for (k = 105; k <= 995; k++) {
        a0 = k % 10;//��λ
        a1 = (k / 10) % 10;//ʮλ
        a2 = k / 100;//��λ

        if (sub(k, 3) && (a0 == 5 || a1 == 5 || a2 == 5)) {
            printf("%d ", k);
            m=m+1;
            count++;
        }
    }
    printf("\n����: %d\n", count);
    
    system("pause");
    getchar();
    return 0;
}
