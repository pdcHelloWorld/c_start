#include <stdio.h>
#include <stdlib.h>

void strcpy2(char *from, char *to) {
	while ((*to++ = *from++)) {
	}
}

int main() {
	char *p = (char *)malloc(20 * sizeof(char));
	char b[] = "hello";
	strcpy2(b, p);
	printf("¸´ÖÆºóµÄ×Ö·û´®£º%s\n", p);
	free(p);
	p = NULL;
	system("pause");
	getchar();
	return 0;
}


