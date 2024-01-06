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
    printf("��ʼ����:\n");
    display(head);
    printf("\n����Ҫɾ��������: ");
    scanf("%s", targetName);
    head = del(head, targetName);
    printf("\nɾ���������:\n");
    display(head);
    system("pause");
    return 0;
}

// ��������ĺ���
struct book *create() {
    struct book *head = NULL;
    struct book *current = NULL;
    struct book *newNode = NULL;
    int bno;
    char name[10];
    printf("���������Ϣ�����Ϊ0�������룩:\n");
    while (1) {
        printf("���: ");
        scanf("%d", &bno);
        if (bno == 0) {
            break;
        }
        printf("����: ");
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

// ��ʾ����ĺ���
void display(struct book *head) {
    struct book *current = head;
    while (current != NULL) {
        printf("���: %d, ����: %s\n", current->bno, current->name);
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
        printf("\n��ɾ���������Ϣ: ���: %d, ����: %s\n", current->bno, current->name);
        free(current);
    } else {
        printf("\nδ�ҵ�����Ϊ %s ����\n", target);
    }
    return head;
}
