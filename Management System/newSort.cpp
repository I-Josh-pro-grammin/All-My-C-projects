#include <iostream>
using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

struct Node{
  int data;
  Node* next;
  Node(int d) {
    data=d;
    next=NULL;
  }
};

Node* head = NULL;

void insert(int value) {
  Node* newNode = new Node(value);
  newNode->next = NULL;
  if(head==NULL) {
    head=newNode;
  }else {
    Node* temp = head;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
  }
}

void insertEnd(int value) {
  Node* newNode = new Node(value);
  Node* temp = head;
  while(temp->next != NULL) {
    temp=temp->next;
  }
  temp->next=newNode;
}

void insertBeginning(int value) {
  Node* newNode = new Node(value);
  if(head==NULL) {
    head=newNode;
  }

  newNode->next = head;
  head=newNode;
}

void deleteAtBeginning() {
  if(head==nullptr) {
    cout<<"The list is already empty" << endl;
    return;
  }

  head=head->next;
}

void deleteAtEnd() {
  if(head==nullptr) {
    cout<<"The list is already empty" << endl;
    return;
  }

  if(head->next==nullptr) {
    delete head;
    head=nullptr;
    return;
  }

  Node* temp = head;
  while(temp->next != NULL && temp->next->next!=NULL) {
    temp=temp->next;
  }
  delete temp->next;
  temp->next=nullptr;
}

void sortLinkedList() {
  if(head==nullptr) cout << "The linked List is empty";

  for(Node* i= head; i->next!=NULL; i=i->next) {
    for(Node* j= head; j->next!=NULL; j=j->next) {
       if(j->data > j->next->data) {
          swap(j->data, j->next->data);
       }
    }
  }
}

void displayLinkedList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

}

int main() {
    insert(4);
    insert(10);
    insert(20);
    insert(1);

    cout << "Before sorting: ";
    displayLinkedList();

    sortLinkedList();

    cout << "After sorting: ";
    displayLinkedList();

    insertBeginning(2);
    cout << "After adding 2 at the beginning: ";
    displayLinkedList();

    deleteAtBeginning();
    cout << "After deleting at the beginning: ";
    displayLinkedList();

    deleteAtEnd();
    cout << "After deleting at the end: ";
    displayLinkedList();

    insertEnd(20);
    cout << "After inserting at the end: ";
    displayLinkedList();

    return 0;
}
