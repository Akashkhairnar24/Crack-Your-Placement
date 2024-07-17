/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node *cnt0 = NULL, *cnt1 = NULL, *cnt2 = NULL;
        Node *temp = head;
        int cnt = 0;
        int zero = -1, one = -1, two = -1;
        while(cnt<4){
            if(temp->data==0 && zero==-1){
                cnt0 = temp;
                zero = 1;
                cnt++;
            }
            else if(temp->data==1 && one==-1){
                cnt1 = temp;
                one = 1;
                cnt++;
            }
            else if(temp->data==2 && two==-1){
                cnt2 = temp;
                two = 1;
                cnt++;
            }
            temp = temp->next;
        }
        temp = head;
        Node *head0 = cnt0;
        Node *head1 = cnt1;
        Node *head2 = cnt2;
        while(temp!=nullptr){
            if(temp->data==0 && temp!=cnt0){
                cnt0->next = temp;
                cnt0 = temp;
            }
            else if(temp->data==1 && temp!=cnt1){
                cnt1->next = temp;
                cnt1 = temp;
            }
            else if(temp->data==2 && temp!=cnt2){
                cnt2->next = temp;
                cnt2 = temp;
            }
            temp = temp->next;
        }
        if(head0!=NULL){
            if(head1!=nullptr){
                cnt0->next = head1;
                if(head2!=nullptr){
                    cnt1->next = head2;
                    return head0;
                }
                return head0;
            }
            else{
                if(head2!=nullptr){
                    cnt0->next = head2;
                    return head0;
                }
                return head0;
            }
        }
        else{
            if(head1!=nullptr){
                if(head2!=nullptr){
                    cnt1->next = head2;
                    return head1;
                }
                return head1;
            }
            else{
                return head2;
            }
        }
        return head2;
        
    }
};