#include <bits/stdc++.h>

using namespace std;

class Node{
  public:
    int Value;
    Node* Next;
};



void display(Node* n) {
  while(n!=NULL) {
    cout << n->Value << endl;
    n= n->Next;
  }
 }

void deleteByKey(Node* head, int key) {
  if(head->Next == NULL) {
    cout << "Its over nothin in here" << endl;
    return;
  }

  if(head->Value == key) {
    Node* temp = head;
    head= head->Next;
    delete temp;
    cout << "ITs over your node with key was deleted" << endl;
    return;
  }

  Node* current = head;
  while(current->Next != NULL && current->Next->Value != key) {
    current = current->Next;
  }

  if(current->Next == NULL) {
    cout << "Nope couldn't find it in this list";
    return;
  }

  Node* temp= current;
  current=current->Next;
  delete temp;
  cout << "Done removing node with " << current << "as key";
  return;

}

 bool searchElement(Node* head, int key) {
     Node* p=head;
     while(p!=NULL) {
        if(p->Value == key) {
            return true;
        }
        p=p->Next;
     }
   return false;
 }

 void insertAtBegining(Node* n, Node node) {

 }

int main() {
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head->Value=1;
  head->Next=second;
  second->Value=2;
  second->Next=third;
  third->Value=3;
  third->Next=NULL;


  searchElement(head, 3);
  deleteByKey(head, 2);
  display(head);
return 0;
}
