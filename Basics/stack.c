/* Trying to implement and understand stack using external variable from KN King - Chapter 10 */

#include <stdio.h>
#include <stdbool.h>
#define MAX 3

int stack[MAX];
int top = 0;

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == MAX;
}

void push(int i) {
    if(is_full())
        printf("Stack Overflow\n");
    else
        stack[top++] = i;
}

int pop(void) {
    if(is_empty()) { 
        printf("Stack Underflow\n");
        return -1;
    }
        return stack[--top];
}

int main() {
    push(10);
    push(20);
    push(12);
    push(17);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}
