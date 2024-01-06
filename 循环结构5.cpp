#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s = 0; 
    int n = 0; 
    int f = 1; 
    while (s <= 2000) 
    {
        n++; 
        f = f * n; 
        s = s + f; 
    }
    printf("n=%d, s=%d\n", n, s);
	getchar();
	system("pause"); 
    return 0;
}
