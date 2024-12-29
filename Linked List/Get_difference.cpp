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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    if (head == NULL) {
        return 0; // Handle empty list case
    }

    int maxVal = head->val;
    int minVal = head->val;

    Node *temp = head->next;
    while (temp != NULL)
    {
        maxVal = max(maxVal, temp->val);
        minVal = min(minVal, temp->val);
        temp = temp->next;
    }

    cout << maxVal - minVal << endl;

    return 0;
}