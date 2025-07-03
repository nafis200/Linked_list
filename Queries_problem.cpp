// dsa 2nd week exam

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

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_at_any_position(Node *&head, Node *&tail, int index) {
    if (head == NULL) return;

    if (index == 0) {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) tail = NULL;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL || temp->next == NULL) return;
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    if (deleteNode == NULL) return;

    temp->next = deleteNode->next;
    if (deleteNode == tail) tail = temp;
    delete deleteNode;
}

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--) {
        int op, val;
        cin >> op >> val;

        if (op == 0) {
            insert_at_head(head, tail, val);
        } else if (op == 1) {
            insert_at_tail(head, tail, val);
        } else if (op == 2) {
            delete_at_any_position(head, tail, val);
        }

        print(head);
    }
}
