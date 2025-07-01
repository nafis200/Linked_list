// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_at_head(Node* head, int val){
//     Node* newNode = new Node(100);
//     newNode->next = head;
//     head = newNode;
// }

// int main()
// {
//     Node *head = new Node(10);
//     Node *a = new Node(20);

//     head->next = a;
    
//      insert_at_head(head, 100);
  
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// } 

// its wrong why 


// but its correct

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


void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = tail->next;

}

void print(Node *head, Node* temp){
     temp = head;
     while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* temp = NULL;

    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,temp,val);
    }
   
    print(head,temp);

    
    

    

    return 0;
}
