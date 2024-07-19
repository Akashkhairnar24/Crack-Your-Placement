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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        return head;
        ListNode *temp = head, *newhead = nullptr, *prev = nullptr;
        while(temp!=nullptr){
            int ans = temp->val;
            temp = temp->next;
            bool flag = true;
            while(temp!=nullptr && temp->val==ans){
                temp = temp->next;
                flag = false;
            }
            if(flag==false){
                continue;
            }
            else{
                ListNode *newnode = new ListNode(ans);
                if(prev!=nullptr){
                    prev->next = newnode;
                }
                prev = newnode;
                if(newhead==nullptr){
                    newhead= prev;
                }
                
            }
        }
        return newhead;
    }
};