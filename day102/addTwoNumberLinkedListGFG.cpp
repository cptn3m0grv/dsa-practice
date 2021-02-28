// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
struct Node *reverseList(Node *head){
    struct Node *prev = NULL;
    struct Node *temp = NULL;
    while(head){
        prev = head;
        head = head->next;
        prev->next = temp;
        temp = prev;
    }
    return prev;
}

struct Node* addTwoLists(struct Node* l1, struct Node* l2)
{
    // code here
    l1 = reverseList(l1);
    l2 = reverseList(l2);
    Node* newHead = NULL;
    Node* curr = NULL;
    int sum = 0;
    int carry = 0;
    while(l1!=NULL||l2!=NULL||carry!=0){
        sum+=carry;
        if(l1){
            sum=sum+(l1->data);
            l1=l1->next;
        }
        if(l2){
            sum=sum+(l2->data);
            l2=l2->next;
        }
        carry=sum/10;
        sum=sum%10;

        if(newHead==NULL){
            newHead=new Node(sum);
            curr=newHead;
        }else{
            curr->next = new Node(sum);
            curr=curr->next;
        }
        sum=0;
    }
    newHead = reverseList(newHead);
    return newHead;
}

