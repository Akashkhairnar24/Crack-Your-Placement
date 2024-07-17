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
    ListNode* reverseList(ListNode* &head) {
        ListNode *curr = head, *prev = NULL;
        while(curr!=nullptr){
            ListNode *nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        } 
        return prev;
    }
    ListNode *middle(ListNode * head){
        ListNode *slow = head, *fast = head;
        while(fast!=nullptr){
            fast = fast->next;
            if(fast!=nullptr){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *mid = middle(head);
        //cout<<"mid->"<<mid->next->val<<endl;
        ListNode *snd = reverseList(mid);
        ListNode *first = head;
        //cout<<first->val<<" "<<snd->val<<endl;
        while(first!=nullptr && snd!=nullptr){
            if(first->val!=snd->val)
            return false;
            first = first->next;
            snd = snd->next;
        }
        return true;
    }
};