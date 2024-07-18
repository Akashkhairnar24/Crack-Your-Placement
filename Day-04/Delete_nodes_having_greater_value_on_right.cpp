class Solution
{
    public:
    Node *reverse(Node * &head){
        Node *prev = NULL, *curr = head;
        while(curr!=nullptr){
            Node *nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head = reverse(head);
        Node *temp = head,*prev = nullptr;
        int maxi = INT_MIN;
        while(temp!=NULL){
            maxi = max(maxi,temp->data);
            if(temp->data<maxi){
                temp = temp->next;
                prev->next = temp;
                
            }else{
                prev = temp;
                temp = temp->next;
            }
        }
        return reverse(head);
    }
    
};
   