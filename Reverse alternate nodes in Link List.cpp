struct Node* reverse(struct Node *node){
        struct Node *prev = nullptr;
        while(node){
            Node *temp = node->next;
            node->next = prev;
            prev = node;
            node = temp;
        }
        return (prev);
    }
    
    void assign(struct Node *n1,struct Node *n2){
        while(n1->next) n1 = n1->next;
        n1->next = n2;
    }
    
    void rearrange(struct Node *odd)
    {
        struct Node *n1 = odd,*n2 = odd->next;
        struct Node *even = nullptr;
        while(n1 && n2){
            if(!even) even = n2;
            n1->next = n2->next;
            n2->next = n2->next ? n2->next->next : nullptr;
            n1 = n1->next;
            n2 = n2->next;
        }
        
        even = reverse(even);
        assign(odd,even);
    }

