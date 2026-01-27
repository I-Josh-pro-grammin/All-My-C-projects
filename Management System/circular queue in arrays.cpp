#include <bits/stdc++.h>
using namespace std;

class ArrayQueue {
private:
    static const int SIZE = 5;
    int first;
    int rear;
    int rem;
    int arr[SIZE];
public:
    ArrayQueue() {
        first = -1;
        rear = -1;
        rem = 0;
    }

    bool isEmpty() {
        return rem == 0;
    }

    bool isFull() {
        return rem == SIZE - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (isEmpty()) {
            first++;
        }

        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        rem++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        first++;
        rem--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue empty" << endl;
            return;
        }

        for (int i = first; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    int count() {
        return rem;
    }

    int getFirst() {
      return first;
    }

    int getRear() {
      return rear;
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

    q.enqueue(6);
    q.enqueue(5);

    q.display();

    cout << "Queue count: " << q.count() << endl;

    return 0;
}
