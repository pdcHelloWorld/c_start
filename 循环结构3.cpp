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
    printf("�����룬��##������\n");
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
        else //�������#��
        {
            if (ch == ' ') 
            {
                space++; 
            }
            else if (ch >= '0' && ch <= '9') //�ж��Ƿ�Ϊ����
            {
                number++; 
            }
            else if (ch >= 'A' && ch <= 'Z') //�ж��Ƿ�Ϊ��д��ĸ
            {
                ch = ch + 32; //ת��ΪСд��ĸ
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
