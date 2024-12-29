#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_index(Node*& head, int index) {
    if (head == NULL) return;
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) return;
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    while (curr != NULL && count < index) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (curr == NULL) return;
    prev->next = curr->next;
    delete curr;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;
    Node* head = NULL;
    Node* tail = NULL;
    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_head(head, v);
            if (tail == NULL) {
                tail = head;
            }
        } else if (x == 1) {
            insert_tail(head, tail, v);
        } else if (x == 2) {
            delete_at_index(head, v);
            if (head == NULL) {
                tail = NULL;
            } else if (tail->next == NULL) {
                Node* temp = head;
                while (temp->next != NULL && temp->next != tail) {
                    temp = temp->next;
                }
                tail = temp;
            }
        }
        print_linked_list(head);
    }
    return 0;
}