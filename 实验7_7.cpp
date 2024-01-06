#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book {
    int bno;
    char name[10];
    struct book *next;
};
struct book *create();
void display(struct book *head);
struct book *del(struct book *head, char target[]);

int main() {
    struct book *head = NULL;
    char targetName[10];
    head = create();
    printf("初始链表:\n");
    display(head);
    printf("\n输入要删除的书名: ");
    scanf("%s", targetName);
    head = del(head, targetName);
    printf("\n删除后的链表:\n");
    display(head);
    system("pause");
    return 0;
}

// 创建链表的函数
struct book *create() {
    struct book *head = NULL;
    struct book *current = NULL;
    struct book *newNode = NULL;
    int bno;
    char name[10];
    printf("输入书的信息（书号为0结束输入）:\n");
    while (1) {
        printf("书号: ");
        scanf("%d", &bno);
        if (bno == 0) {
            break;
        }
        printf("书名: ");
        scanf("%s", name);
        newNode = (struct book *)malloc(sizeof(struct book));
        newNode->bno = bno;
        strcpy(newNode->name, name);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            current = head;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}

// 显示链表的函数
void display(struct book *head) {
    struct book *current = head;
    while (current != NULL) {
        printf("书号: %d, 书名: %s\n", current->bno, current->name);
        current = current->next;
    }
}
struct book *del(struct book *head, char target[]) {
    struct book *current = head;
    struct book *prev = NULL;
    while (current != NULL && strcmp(current->name, target) != 0) {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        if (prev == NULL) {
            head = current->next;
        } else {
            prev->next = current->next;
        }
        printf("\n已删除的书的信息: 书号: %d, 书名: %s\n", current->bno, current->name);
        free(current);
    } else {
        printf("\n未找到书名为 %s 的书\n", target);
    }
    return head;
}
