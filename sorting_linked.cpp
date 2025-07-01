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
    cout << head->val <<"\n";
    if(head == NULL){
        return;
    }
    print(head->next);
}

void sort_linked_list(Node* head){
   
    for(Node* tmp = head; tmp->next != NULL;tmp = tmp->next){
      
        for(Node* j = tmp->next; j != NULL; j = j->next){
            if(tmp->val > j->val){
                swap(tmp->val,j->val);
            }
        }

    }

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

    sort_linked_list(head);

    print(head);

    return 0;
}
