#include <stdio.h>
#define MAX 10

struct book {
    int id;
    char title[30];
    float price;
    int available;
};

void addbook(struct book lib[], int *count) {
    if (*count >= MAX) {
        printf("the lib is full!\n");
        return;
    }
    printf("enter id title price: ");
    scanf("%d %s %f", &lib[*count].id, lib[*count].title, &lib[*count].price);
    lib[*count].available = 1;
    (*count)++;
    printf("book added!\n");
}

void printall(struct book lib[], int count) {
    int i;
    if (count == 0) {
        printf("no books yet\n");
        return;
    }
    for (i = 0; i < count; i++) {
        printf("%d %s %.2f %d\n", lib[i].id, lib[i].title,
               lib[i].price, lib[i].available);
    }
}

int findbook(struct book lib[], int count, int id) {
    int i;
    for (i = 0; i < count; i++) {
        if (lib[i].id == id) {
            return i;
        }
    }
    return -1;
}

void borrowbook(struct book *p) {
    if (p->available == 1) {
        p->available = 0;
        printf("borrowed successfully!\n");
    } else {
        printf("this book already borrowed!\n");
    }
}

int main() {
    struct book lib[MAX];
    int count = 0, choice, id, fb;

    do {
        printf("\nselect:\n 0-exit\n 1-add book\n 2-print\n 3-borrow\n> ");
        scanf("%d", &choice);

        if (choice == 1) {
            addbook(lib, &count);
        } else if (choice == 2) {
            printall(lib, count);
        } else if (choice == 3) {
            printf("enter book id: ");
            scanf("%d", &id);
            fb = findbook(lib, count, id);
            if (fb != -1) {
                borrowbook(&lib[fb]);
            } else {
                printf("book not found\n");
            }
        }
    } while (choice != 0);

    return 0;
}