#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};
void print_forward(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head==NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}
int main()
{
   Node *head = NULL;
  Node *a = new Node(20);
   Node *tail = NULL;

  head->next = a;
  a->prev = head;

  a->next = tail;
  tail->prev = a;

  insert_at_tail(head, tail, 40);
  insert_at_tail(head, tail, 50);
  print_forward(head);

  return 0;
}
