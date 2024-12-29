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

// void print_linked_list(Node *&head) {
//   Node *temp = head;
//   while (temp != NULL) {
//     cout << temp->val << " ";
//     temp = temp->next;
//   }
//   cout << endl;
// }

void check_duplicates(Node *head) {
  const int MAX_VALUE = 100; // Maximum value is 100
  vector<int> freq(MAX_VALUE + 1, 0); // Frequency array size 101
  Node *temp = head;
  bool duplicate_found = false;

  while (temp != NULL) {
    freq[temp->val]++;
    if (freq[temp->val] > 1) {
      duplicate_found = true;
      break;
    }
    temp = temp->next;
  }

  if (duplicate_found) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() { 
  Node* head = NULL;
  Node* tail = NULL;
  int val;
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_tail(head, tail, val);
  }

  //print_linked_list(head);
  check_duplicates(head);

  return 0;
}
