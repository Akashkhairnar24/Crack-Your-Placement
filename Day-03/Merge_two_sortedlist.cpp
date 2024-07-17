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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *first = list1, *snd = list2;
        ListNode *head = nullptr, *prev = nullptr;
        int val;
        while(first!=nullptr || snd!=nullptr){
            if(first==nullptr){
                val = snd->val;
                snd = snd->next;
            }
            else if(snd==nullptr){
                val = first->val;
                first = first->next;
            }
            else if(first->val<=snd->val){
                val = first->val;
                first = first->next;
            }else{
                val = snd->val;
                snd = snd->next;
            }
            ListNode *newnode = new ListNode(val);
            if(prev!=nullptr){
                prev->next = newnode;
            }
            if(head==NULL)
            head = newnode;
            prev = newnode;
        }
        return head;
    }
};