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

int find_index(Node* head, int x) {
    Node* temp = head;
    int index = 0;
    while (temp != NULL) {
        if (temp->val == x) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
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
        int x;
        cin >> x;
        cout << find_index(head, x) << endl;
    }
    return 0;
}