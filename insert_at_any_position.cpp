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

void insert_at_any_postion(Node* head, int inx, int val){
    Node* newNode = new Node(val);
    
    Node *tmp = head;
    for(int i = 0; i < inx - 1; i++){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);

    head->next = a;

    insert_at_any_postion(head, 1, 40);

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
