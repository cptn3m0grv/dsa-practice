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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newHead = nullptr;
        ListNode* curr = nullptr;
        int sum = 0;
        int carry = 0;
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            sum+=carry;
            if(l1){
                sum=sum+(l1->val);
                l1=l1->next;
            }
            if(l2){
                sum=sum+(l2->val);
                l2=l2->next;
            }
            carry=sum/10;
            sum=sum%10;
            
            if(newHead==nullptr){
                newHead=new ListNode(sum);
                curr=newHead;
            }else{
                curr->next = new ListNode(sum);
                curr=curr->next;
            }
            sum=0;
        }
        return newHead;
    }
};
