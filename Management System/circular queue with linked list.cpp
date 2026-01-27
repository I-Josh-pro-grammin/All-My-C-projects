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
  public:
      LinkedQueue() {
        first=NULL;
        rear=NULL;
        rem=0;
      }

      Node* first;
      Node* rear;

      int rem;

      bool isEmpty() {
        return first==NULL;
      }

      void enqueue(int x) {
        Node* n = new (nothrow) Node(x);
        if(n==NULL) {
            cout << "Memory is full";
            return;
        }
        if (isEmpty()) {
            first = rear = n;
            rear->next = first;
            rem++;
            return;
        }

        rear->next=n;
        rear=n;
        rear->next=first;

        rem++;
        return;
      }

      void dequeue() {
        if(isEmpty()) {
            cout << "Game over" << endl;
            return;
        }

        Node* temp;
        temp=first;
        if (first == rear) {
            delete first;
            first = rear = NULL;
        } else {
            Node* temp = first;
            first = first->next;
            rear->next = first;
            delete temp;
        }

        rem--;

        return;
      }



      void display() {
        if (isEmpty()) return;

        Node* currentNode = first;
        do {
            cout << currentNode->data << ", ";
            currentNode = currentNode->next;
        } while (currentNode != first);


        cout << endl;
        return;
      }
  };


int main() {
  LinkedQueue* l = new LinkedQueue();

  l->enqueue(5);
  l->enqueue(19);
  l->enqueue(2);
  l->enqueue(29);

  l->dequeue();
  l->dequeue();

  l->display();

  return 0;
}
