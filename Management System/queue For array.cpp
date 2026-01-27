#include <bits/stdc++.h>
using namespace std;

class ArrayQueue {
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int front;
    int rear;

public:
    ArrayQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return rear == SIZE - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        rear++;
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front + 1; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int count() {
        return rear - front;
    }
};

int main() {
    ArrayQueue q;

    q.enqueue(5);
    q.enqueue(19);
    q.enqueue(4);
    q.enqueue(1);

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    cout << "Queue count: " << q.count() << endl;

    return 0;
}
