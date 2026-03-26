#include <bits/stdc++.h>

using namespace std;

struct Node{
  int data;
  Node* next;

  Node(int val) {
    data = val;
    next = NULL;
  }
};

Node* mid_point(Node* head) {
  if(head == NULL || head->next == NULL) {
    return head;
  }

  Node* fast = head;
  Node* slow = head;

  while(fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}

Node* merging(Node* a, Node* b) {
  if(a == NULL) {
    return b;
  }
  if(b==NULL) {
    return a;
  }

  Node* c;

  if(a->data < b->data) {
    c=a;
    c->next = merging(a->next, b);
  }else{
    c=b;
    c->next = merging(a, b->next);
   }

   return c;
}



Node* merge_sort(Node* head) {
  if(head == NULL || head->next == NULL) {
    return head;
  }

  Node* mid = mid_point(head);
  Node* a = head;
  Node* b = mid->next;

  mid->next = NULL;

  a=merge_sort(a);
  b=merge_sort(b);

  Node* c = merging(a, b);
  return c;

  }

void print(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    Node* head = new Node(5);
    head->next = new Node(3);
    head->next->next = new Node(8);
    head->next->next->next = new Node(2);

    head = merge_sort(head);

    print(head);
    return 0;
}
