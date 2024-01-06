#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k; 
    //打印上半部分
    for (i = 0; i < 4; i++) //行数
    {
        for (j = 0; j < 4 - i - 1; j++) 
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) 
        {
            printf("*");
        }
        printf("\n"); //换行
    }
    //打印下半部分
    for (i = 2; i >= 0; i--) //行数
    {
        for (j = 0; j < 4 - i - 1; j++) 
        {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) 
        {
            printf("*");
        }
        printf("\n"); //换行
    }
    getchar();
    system("pause");
    return 0;
}
