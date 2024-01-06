#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void find(const char sentence[]) {
    int max = 0;
    int current= 0;
    int start = 0;
    int end = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' || sentence[i] == '\n') {
            if (current > max) {
                max = current;
                start = i - current;
                end = i;
            }
            current = 0;
        } else {
            current++;
        }
    }
    if (current > max) {
        max = current;
        start = strlen(sentence) - current;
        end = strlen(sentence);
    }
    printf("最长的单词是: ");
    for (int i = start; i < end; i++) {
        putchar(sentence[i]);
    }
    printf("\n");
}

int main() {
    char sentence[1000];
    printf("请输入一行字符串：\n");
    fgets(sentence, sizeof(sentence), stdin);
    find(sentence);
    system("pause");
    getchar();
    return 0;
}
