#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    printf("%d inserted into list\n", data);
}

void delete(int data) {
    struct Node* temp = head, *prev = NULL;

    if (temp != NULL && temp->data == data) {
        head = temp->next;
        free(temp);
        printf("%d deleted from list\n", data);
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("%d not found in list\n", data);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("%d deleted from list\n", data);
}

void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
    } else {
        printf("List elements are:\n");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    delete(20);
    display();

    return 0;
}
