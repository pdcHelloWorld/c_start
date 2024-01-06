#include <stdio.h>
#include <stdlib.h>
int main()
{
    double s = 0; 
    int i; 
    for (i = 1; i <= 4; i++) 
    {
        s = s + (double)i / (i + 1); 
    }
    printf("s=%.2f\n", s); 
    getchar();
    system("pause");
    return 0;
}
