Node* divide(int N, Node *head_ref){
        Node* evenStart = nullptr;
    Node* evenEnd = nullptr;
    Node* oddStart = nullptr;
    Node* oddEnd = nullptr;
    Node* currNode = head_ref;

    while (currNode != nullptr) {
        int val = currNode->data;

        if (val % 2 == 0) {
            if (evenStart == nullptr) {
                evenStart = currNode;
                evenEnd = evenStart;
            }
            else {
                evenEnd->next = currNode;
                evenEnd = evenEnd->next;
            }
        }
        else {
            if (oddStart == nullptr) {
                oddStart = currNode;
                oddEnd = oddStart;
            }
            else {
                oddEnd->next = currNode;
                oddEnd = oddEnd->next;
            }
        }
        currNode = currNode->next;
    }
    if (oddStart == nullptr || evenStart == nullptr)
        return head_ref;
    evenEnd->next = oddStart;
    oddEnd->next = nullptr;
    head_ref = evenStart;
    return head_ref;
    
    }
};