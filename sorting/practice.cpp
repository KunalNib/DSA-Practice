#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack {
    int top;
    unsigned int capacity;
    char *array;
};

struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}

int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, char item) {
    if (isFull(stack)) {
        printf("Stack is Full\n");
        return;
    }
    stack->array[++stack->top] = item;
}

char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
        return CHAR_MIN;
    }
    return stack->array[stack->top--];
}

char peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is Empty\n");
        return CHAR_MIN;
    }
    return stack->array[stack->top];
}

void printStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack contents from top to bottom:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("%c\n", stack->array[i]);
    }
}

int main() {
    unsigned int n;
    printf("Enter size of stack: ");
    scanf("%u", &n);

    struct Stack* stack = createStack(n);

    for (unsigned int i = 0; i < n; i++) {
        char ch;
        printf("Enter a character: ");
        scanf(" %c", &ch);
        push(stack, ch);
    }
    printStack(stack);
    return 0;
}
