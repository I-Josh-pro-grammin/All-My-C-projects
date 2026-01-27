#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class LinkedQueue {
private:
    Node* front;
    Node* rear;
    int size;

public:
    LinkedQueue() {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL) {
            rear = NULL;
        }

        size--;
    }

    int count() {
        return size;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedQueue q;

    q.enqueue(5);
    q.enqueue(29);
    q.enqueue(3);
    q.enqueue(38);
    q.enqueue(22);

    q.display();
    cout << "Current nodes are " << q.count() << endl;

    while (!q.isEmpty()) {
        q.dequeue();
    }
    q.display();

    return 0;
}
