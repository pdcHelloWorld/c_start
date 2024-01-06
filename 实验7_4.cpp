#include <stdio.h>
int cmp(char *p1, char *p2) ;
int main() {
	int strcmp(char *p1, char *p2);
	int m;
	char str1[20], str2[20], *p1, *p2;
	printf("Input two strings:\n");
	scanf("%s", str1);
	scanf("%s", str2);
	p1 = &str1[0];
	p2 = &str2[0];
	m = cmp(p1, p2);
	printf("result: %d\n", m);
	return 0;
}

int cmp(char *p1, char *p2) {     /*两个字符串比较的函数*/
	int i;
	while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i]) {
		i++;
	}
	if (p1[i] == p2[i]) {
		return 0;
	} else {
		return i + 1;
	}
}

