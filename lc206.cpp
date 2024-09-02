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

//LOOP
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == nullptr || head->next == nullptr)return head;
//         ListNode* pre = nullptr;
//         ListNode* cur = head;
//         ListNode* nex = nullptr;
//         while(cur!=nullptr){
//             nex = cur->next;
//             cur->next = pre;
//             pre = cur;
//             cur = nex;
//         }
//         return pre;
//     }
// };

//RECURSION 1
class Solution {
public:
    void reverse(ListNode* &head,ListNode* prev,ListNode* curr) {
        if(curr==nullptr){
            head = prev;
            return;
        }
        reverse(head, curr,curr->next);
        curr->next = prev;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode* pre = nullptr;
        ListNode* cur = head;
        reverse(head,pre,cur);
        return head;
    }
};

//RECURSION 2
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == nullptr || head->next == nullptr)return head;
//         ListNode* h=reverseList(head->next);
//         head->next->next=head;
//         head->next=nullptr;
//         return h;
//     }
// };
