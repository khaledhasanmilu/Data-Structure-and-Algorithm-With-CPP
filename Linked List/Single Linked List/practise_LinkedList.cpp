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

int count_size(Node *head) {
    int count = 0;
    Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val) {
    if (pos == 0) {
        insert_head(head, tail, val);
        return;
    }

    int size = count_size(head);
    if (pos >= size) {
        insert_tail(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    cout << "Enter values to create a Singly Linked List (-1 to stop):" << endl;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_tail(head, tail, val);
    }

    cout << "Current List: ";
    print_linked_list(head);

    int size = count_size(head);
    cout << "Size of the list: " << size << endl;

    cout << "Enter a value to insert at the head: ";
    cin >> val;
    insert_head(head, tail, val);
    cout << "List after inserting at head: ";
    print_linked_list(head);

    cout << "Enter a value to insert at the tail: ";
    cin >> val;
    insert_tail(head, tail, val);
    cout << "List after inserting at tail: ";
    print_linked_list(head);

    int pos;
    cout << "Enter a position and value to insert: ";
    cin >> pos >> val;
    insert_at_position(head, tail, pos, val);
    cout << "List after inserting at position " << pos << ": ";
    print_linked_list(head);

    return 0;
}
