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
    ListNode *reverse(ListNode *leftnode, ListNode *rightnode){
        ListNode *prev = nullptr;
        while(leftnode!=rightnode){
            ListNode *leftnext = leftnode->next;
            leftnode->next = prev;
            prev = leftnode;
            leftnode= leftnext;
        }
        leftnode->next = prev;
        prev = leftnode;
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *leftnode = head, *rightnode = head;
        ListNode *leftprev = NULL;
        right = right-1;
        while((right)--){
            if(left-1>0){
                leftprev = leftnode;
                //cout<<leftprev->val<<" ";
                leftnode = leftnode->next;
                left--;
            }
            rightnode = rightnode->next;
            
        } 
        ListNode *rightnext = rightnode->next;
        ListNode *newhead = reverse(leftnode,rightnode);
        if(leftprev!=nullptr)
        leftprev->next = newhead;
        else
        head = newhead;
        leftnode->next = rightnext;
        return head;
    }
};