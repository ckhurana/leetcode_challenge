/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* n = head;
        while (n != NULL) {
            if (n->child) {
                Node *second = n->next;
                Node *cEnd = n->child;
                while(cEnd->next != NULL) {
                    cEnd = cEnd->next;
                }
                cEnd->next = second;
                if (second)
                    second->prev = cEnd;
                n->child->prev = n;
                n->next = n->child;
                n->child = NULL;
            }
            n = n->next;
        }
        return head;
    }
};
