#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int queue[MAX], front = -1, rear = -1;

void insert(int data) {
    if (rear >= MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = data;
        printf("%d inserted into queue\n", data);
    }
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("%d deleted from queue\n", queue[front++]);
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for (int i = front; i <= rear; ++i) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    delete();
    display();

    return 0;
}
