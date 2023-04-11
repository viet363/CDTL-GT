//ngan xep
#include <iostream>
using namespace std;

#define MAX_SIZE 100 

int stack[MAX_SIZE]; 
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void push(int value) {
    if (isFull()) {
        cout << "Stack is full!" << endl;
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int peek() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top];
}

int main() {
    push(41);
    push(23);
    push(4);
    push(14);
    push(56);
    push(1);
    cout << "Top of stack: " << peek() << endl;
    int value = pop();
    cout << "Pop value: " << value << endl;

    cout << "Remaining elements in stack: ";
    while (!isEmpty()) {
        cout << pop() << " ";
    }
    cout << endl;

    return 0;
}

