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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        int count = 0;
        ListNode* slow = head;
        while(slow){
            ++count;
            slow=slow->next;
        }
        slow = head;
        ListNode* fast = head;
        
        while(fast->next&&fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return (count%2) ? slow : slow->next;
    }
};
