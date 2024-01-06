#include <stdio.h>
#include <stdlib.h>

void rotate(int arr[], int n, int k) {
    int temp;
    for (int i = 0; i < k; i++) {
        temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int n = 5; 
    int arr[5]; 
    printf("������5������: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("������k��ֵ: ");
    scanf("%d", &k);
    rotate(arr, n, k);
    printf("�û��������: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    system("pause");
    getchar();
	return 0;
}
