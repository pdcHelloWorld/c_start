#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int bookNumber;
    char bookTitle[50];
    float bookPrice;
};

void input(struct Book *books);
void change(struct Book *books);
void output(struct Book *books);
void average(struct Book *books);

int main() {
    struct Book books[4];
    char choice;
    do {
        printf("A. INPUT\n");
        printf("B. CHANGE\n");
        printf("C. OUTPUT\n");
        printf("D. AVERAGE\n");
        printf("E. EXIT\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'A':
                input(books);
                break;
            case 'B':
                change(books);
                break;
            case 'C':
                output(books);
                break;
            case 'D':
                average(books);
                break;
            case 'E':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 'E');
    system("pause");
    getchar();
    return 0;
}

// 输入信息
void input(struct Book *books) {
    for (int i = 0; i < 4; ++i) {
        printf("Enter information for Book %d:\n", i + 1);
        printf("Book Number: ");
        scanf("%d", &books[i].bookNumber);
        printf("Book Title: ");
        scanf("%s", books[i].bookTitle);
        printf("Book Price: ");
        scanf("%f", &books[i].bookPrice);
    }
}

// 输入书名，修改对应书本价格，输出修改前后的书本信息
void change(struct Book *books) {
    char targetTitle[50];
    printf("Enter the title of the book: ");
    scanf("%s", targetTitle);
    int index = -1;
    for (int i = 0; i < 4; ++i) {
        if (strcmp(books[i].bookTitle, targetTitle) == 0) {
            index = i;
            break;
        }
    }

    // 修改价格
    if (index != -1) {
        float newPrice;
        printf("Enter the new price for the book: ");
        scanf("%f", &newPrice);
        printf("Before change:\n");
        printf("Book Number: %d\n", books[index].bookNumber);
        printf("Book Title: %s\n", books[index].bookTitle);
        printf("Old Book Price: %.2f\n", books[index].bookPrice);
        books[index].bookPrice = newPrice;
        printf("After change:\n");
        printf("Book Number: %d\n", books[index].bookNumber);
        printf("Book Title: %s\n", books[index].bookTitle);
        printf("New Book Price: %.2f\n", books[index].bookPrice);
    } else {
        printf("Book not found.\n");
    }
}

// 输出全部书本信息
void output(struct Book *books) {
    printf("\nBook Information:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Book %d:\n", i + 1);
        printf("Book Number: %d\n", books[i].bookNumber);
        printf("Book Title: %s\n", books[i].bookTitle);
        printf("Book Price: %.2f\n", books[i].bookPrice);
    }
}

// 计算书本的平均价格
void average(struct Book *books) {
    float sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += books[i].bookPrice;
    }

    float average = sum / 4;
    printf("Average Book Price: %.2f\n", average);
    for (int i = 0; i < 4; ++i) {
        if (books[i].bookPrice > average + 5) {
            printf("Book %d is expensive.\n", i + 1);
        } else if (books[i].bookPrice < average - 5) {
            printf("Book %d is a bargain.\n", i + 1);
        } else {
            printf("Book %d is normal.\n", i + 1);
        }
    }
}
