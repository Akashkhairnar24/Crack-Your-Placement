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
        if(head==NULL)
        return head;
        
        ListNode *curr = head, *currnext = head;
        while(currnext!=NULL){
            if(curr->val==currnext->val){
                currnext = currnext->next;
            }
            else{
                curr->next = currnext;
                currnext = currnext->next;
                curr = curr->next;
            }
        }
        curr->next = NULL;
        return head;
    }
};