#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b, c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << " " << b.val << " " << c.val << "\n";

    cout << "..............\n";
    cout << a.val << " " << a.next->val << "\n";
    cout << a.next->next->val;
}