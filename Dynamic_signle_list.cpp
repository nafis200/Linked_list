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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);

    head->next = a;

    Node *temp = head;

    while (temp->next != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}