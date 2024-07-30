/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
        if(headA==headB)
        return headA;
        while(headA!=nullptr){
            st.insert(headA);
            headA = headA->next;
        }
        while(headB!=nullptr){
            if(st.find(headB)!=st.end()){
                return headB;
            }else
            headB = headB->next;
        }
        return NULL;

    }
};