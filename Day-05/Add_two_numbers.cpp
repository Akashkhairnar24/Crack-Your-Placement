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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1 = l1, *temp2 = l2;
        int carry = 0;
        ListNode *prev = NULL, *head = NULL;
        while(temp1!=nullptr || temp2!=nullptr || carry!=0){
            int sum = carry;
            if(temp1!=nullptr){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if(temp2!=NULL){
                sum+=temp2->val;
                temp2 = temp2->next;
            }
            carry = sum/10;
            ListNode *newnode = new ListNode(sum%10);
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