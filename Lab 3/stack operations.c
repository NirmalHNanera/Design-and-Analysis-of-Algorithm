#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int stack[MAX], top = -1;

void push(int data) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = data;
        printf("%d pushed into stack\n", data);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

void peep() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

void change(int pos, int data) {
    if (pos < 0 || pos > top) {
        printf("Invalid position\n");
    } else {
        stack[pos] = data;
        printf("Element at position %d changed to %d\n", pos, data);
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; --i) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    peep();
    change(1, 50);
    display();
    pop();
    display();

    return 0;
}
