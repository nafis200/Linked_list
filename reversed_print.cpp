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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = tail->next;
}

void print(Node *head)
{
    if(head == NULL){
        return;
    }
    print(head->next);
    cout << head->val <<"\n";
    return;
}

int main()
{
    Node *head = NULL;
    Node *temp = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, temp, val);
    }

    print(head);

    return 0;
}
