#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void insert_tail(Node *&head,Node* &tail, int val)
{
  Node *newNode = new Node(val);
  if (head ==NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  
  tail->next = newNode;
  tail = newNode;
}
void print_linked_list(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}
int main()
{ 
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(30);
  head->next = a;
  a->next = tail;
  insert_tail(head,tail,40);
  insert_tail(head,tail,50);
  insert_tail(head,tail,60);
  print_linked_list(head);
  cout<<"Tail: "<<tail->val<<endl;

  return 0;
}