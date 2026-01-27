#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Stack class
class Stack {
private:
    Node* top;

public:
    // Constructor
    Stack() {
        top = NULL;
    }

    // PUSH operation
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    // POP operation
    int pop() {
        if (top == NULL) {
            cout << "Stack Underflow! Nothing to pop" << endl;
            return -1;
        }
        int popped = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return popped;
    }

    // PEEK operation
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }

    // Check if empty
    bool empty() {
        return top == NULL;
    }

    // Display stack elements
    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor (free memory)
    ~Stack() {
        while (!empty()) {
            pop();
        }
    }
};

// MAIN FUNCTION
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();   // 30 20 10

    cout << "Popped: " << s.pop() << endl;

    s.display();   // 20 10

    cout << "Top element: " << s.peek() << endl;

    if (s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}
