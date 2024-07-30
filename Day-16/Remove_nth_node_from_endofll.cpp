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
        int cnt = 0;
        ListNode *temp = head;
        while(temp!=nullptr){
            temp = temp->next;
            cnt++;
        }
        temp = head;
        cnt = cnt-n;
        if(cnt==0){
            if(head->next==nullptr)
            return nullptr;
            else 
            return head->next;
        }
        int c = 1;
        while(c<cnt){
            temp = temp->next;
            c++;
        }
        if(temp->next->next){
            temp->next = temp->next->next;
        }
        else
        temp->next=nullptr;
        return head;
    }
};