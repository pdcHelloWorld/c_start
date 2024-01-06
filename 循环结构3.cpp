#include <stdio.h>
#include <stdlib.h>
#define M 100 

int main()
{
    char ch; 
    int space = 0; 
    int number = 0; 
    int other = 0; 
    int count = 0; 
    printf("请输入，以##结束：\n");
     do{
        scanf("%c", &ch); 
        if (ch == '#') 
        {
            scanf("%c", &ch); 
            if (ch == '#') 
            {
                break; 
            }
            else 
            {
                other++; 
                count++; 
            }
        }
        else //如果不是#号
        {
            if (ch == ' ') 
            {
                space++; 
            }
            else if (ch >= '0' && ch <= '9') //判断是否为数字
            {
                number++; 
            }
            else if (ch >= 'A' && ch <= 'Z') //判断是否为大写字母
            {
                ch = ch + 32; //转换为小写字母
            }
            else 
            {
                other++; 
            }
            printf("%c", ch); 
            count++; 
        }
    }while (count < M);
   
    printf("\n"); 
    printf("space=%d,number=%d,other=%d\n", space, number, other); 
    getchar();
    system("pause");
    return 0;
}
