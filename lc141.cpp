/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Approach 1 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next ==NULL)return false;
        ListNode *p1 = head;
        ListNode *p2 = head->next;
        while(p2->next!=NULL){
            if(p2->next==p1)return true;
            p1=p1->next;
            if(p2->next->next)p2=p2->next->next;
            else break;
        }
        return false;
    }
};