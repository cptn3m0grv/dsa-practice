/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode *temp = head;
        while(temp){
            ++len;
            temp=temp->next;
        }
        if(len==n){
            return head->next;
        }
        ListNode *p = head;
        ListNode *q = head;
        for(int i=0;i<n;++i){
            q=q->next;
        }
        while(q->next!=NULL){
            q=q->next;
            p=p->next;
        }
        p->next = p->next->next;
        return head;
    }
};
