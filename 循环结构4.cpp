#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k; 
    //��ӡ�ϰ벿��
    for (i = 0; i < 4; i++) //����
    {
        for (j = 0; j < 4 - i - 1; j++) 
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) 
        {
            printf("*");
        }
        printf("\n"); //����
    }
    //��ӡ�°벿��
    for (i = 2; i >= 0; i--) //����
    {
        for (j = 0; j < 4 - i - 1; j++) 
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) 
        {
            printf("*");
        }
        printf("\n"); //����
    }
    getchar();
    system("pause");
    return 0;
}
