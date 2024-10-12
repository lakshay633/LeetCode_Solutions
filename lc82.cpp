class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t=new ListNode(0);
        t->next=head;
        ListNode* prev = t;
        ListNode* curr = head;
        while (curr) {
            if (curr->next && curr->val == curr->next->val) {
                while (curr->next && curr->val == curr->next->val) {
                    curr = curr->next;
                }
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        return t->next;
        return head;
    }
};
