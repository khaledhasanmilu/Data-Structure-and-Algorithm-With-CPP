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

// void print_linked_list(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

void print_middle(Node *head)
{
    // Find the size of the linked list
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    // Determine the middle
    temp = head;
    int middleIndex1 = (size - 1) / 2;
    int middleIndex2 = size / 2;

    for (int i = 0; i < middleIndex1; i++)
    {
        temp = temp->next;
    }

    if (middleIndex1 == middleIndex2)
    {
        // Single middle element
        cout << "Middle Element: " << temp->val << endl;
    }
    else
    {
        // Two middle elements
        cout << "Middle Elements: " << temp->val << " ";
        cout << temp->next->val << endl;
    }
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

    //print_linked_list(head);
    print_middle(head);

    return 0;
}
