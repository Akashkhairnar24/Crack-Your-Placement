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
        while(leftnode->next!=rightnode){
            ListNode *leftnext = leftnode->next;
            leftnode->next = prev;
            prev = leftnode;
            leftnode= leftnext;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *leftnode = head, *rightnode = head;
        ListNode *leftprev = nullptr;
        right = right-1;
        while((right)--){
            if(left-1>0){
                leftprev = leftnode;
                leftnode = leftnode->next;
                left--;
            }
            rightnode = rightnode->next;
        } 
        //cout<<leftnode->val<<" "<<rightnode->val;
        return reverse(leftnode,rightnode);
        ListNode *rightnext = rightnode->next;
        leftprev->next = reverse(leftnode,rightnode);
        leftnode->next = rightnext;
        return head;
    }
};