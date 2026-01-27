#include <bits/stdc++.h>
using namespace std;

struct Student {
    int code;
    string name;
    int age;
};

struct Node {
    Student data;
    Node* next;

    Node(Student s) {
        data = s;
        next = nullptr;
    }
};

class PersonPriorityQueue {
private:
    Node* front;

public:
    PersonPriorityQueue() {
        front = nullptr;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(Student s) {
        Node* newNode = new Node(s);

        if (isEmpty() || s.age > front->data.age) {
            newNode->next = front;
            front = newNode;
            return;
        }

        Node* current = front;
        while (current->next != nullptr &&
               current->next->data.age >= s.age) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

        void dequeue() {
        if (isEmpty()) {
            cout << "Priority Queue is empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

        void peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Highest Priority Student:\n";
        cout << "Code: " << front->data.code
             << ", Name: " << front->data.name
             << ", Age: " << front->data.age << endl;
    }

        void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* current = front;
        cout << "Students in Priority Order:\n";
        while (current != nullptr) {
            cout << "Code: " << current->data.code
                 << ", Name: " << current->data.name
                 << ", Age: " << current->data.age << endl;
            current = current->next;
        }
    }
};


int main() {
    PersonPriorityQueue pq;

    pq.enqueue({101, "Alice", 22});
    pq.enqueue({102, "Bob", 19});
    pq.enqueue({103, "Charlie", 25});
    pq.enqueue({104, "Diana", 21});

    pq.display();

    cout << "\nAfter dequeue:\n";
    pq.dequeue();
    pq.display();

    pq.peek();

    return 0;
}
