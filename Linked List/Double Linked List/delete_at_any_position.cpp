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
void deleted_at_any_position(Node* &head,int index){
  Node* temp = head;
  for (int i = 1; i < index; i++)
  {
    temp = temp->next;
  }
  Node* deleteNode = temp->next;
  temp->next=deleteNode->next;
  temp->next->prev=temp;
  delete deleteNode;
}
 int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(30);
  
  head->next = a;
  a->prev = head;

  a->next = tail;
  tail->prev = a;
deleted_at_any_position(head,1);
  print_forward(head);
  return 0;
}
