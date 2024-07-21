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
    int getlen(ListNode *head){
        int len = 0;
        ListNode *temp = head;
        while(temp!=nullptr){
            temp = temp->next;
            len++;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)
        return head;
        ListNode *prev = nullptr, *curr = head,*nextnode = curr->next;
        int pos = 0;
        int len = getlen(head);
        if(len<k)
        return head;
        while(pos<k){
            pos++;
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        ListNode *recans = nullptr;
        if(nextnode!=nullptr){
            recans = reverseKGroup(nextnode,k);
            head->next = recans;
        }
        return prev;
    }
};