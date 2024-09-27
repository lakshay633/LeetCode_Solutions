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
    bool sizeOfLL(ListNode* head, int k){
        ListNode* temp = head;
        int c = 1;
        while(temp->next!=nullptr){
            temp=temp->next;
            c++;
        }
        return c>=k;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr)return nullptr;
        int c=0;
        ListNode* curr = head;
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        while(curr!=nullptr &&c<k){
            next = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            c++;
        }
        if (next!=nullptr && sizeOfLL(next,k))head -> next = (reverseKGroup(next, k));
        else head -> next = next;
        return prev;
    }
};