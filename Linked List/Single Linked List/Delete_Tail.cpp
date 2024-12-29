#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insert_tail(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);
  if (head == NULL) {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}

void print_linked_list(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

void delete_at_any_position(Node *&head, Node *&tail, int indx) {
  if (head == NULL) {
    cout << "List is empty. Nothing to delete." << endl;
    return;
  }
  
  if (indx == 0) {
    Node *deleteNode = head;
    head = head->next;
    if (head == NULL) { // If list becomes empty, update tail
      tail = NULL;
    }
    delete deleteNode;
    return;
  }
  
  Node *temp = head;
  for (int i = 1; i < indx; i++) {
    if (temp->next == NULL || temp->next->next == NULL) {
      cout << "Invalid index." << endl;
      return;
    }
    temp = temp->next;
  }
  
  Node *deleteNode = temp->next;
  temp->next = deleteNode->next;
  if (deleteNode == tail) { // Update tail if deleting last node
    tail = temp;
  }
  delete deleteNode;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  int val;

  cout << "Enter values for the linked list (-1 to stop):" << endl;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_tail(head, tail, val);
  }

  int indx;
  cout << "Enter the position to delete:" << endl;
  cin >> indx;

  delete_at_any_position(head, tail, indx);
  print_linked_list(head);

  return 0;
}
