/*
 * @lc app=leetcode id=430 lang=cpp
 *
 * [430] Flatten a Multilevel Doubly Linked List
 */

// @lc code=start
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
    Node *recursive(Node *head){
        Node *curr=head, *tail=head;
        while(curr){
            Node *next=curr->next;
            Node *child=curr->child;
            if(child){
                Node* _tail=recursive(child);
                _tail->next=next;
                if(next) next->prev=_tail;
                curr->next=child;
                child->prev=curr;
                curr->child=nullptr;
                curr=_tail;

            }else{
                curr=next;
            }
            if(curr) tail=curr;
            
        }
        return tail;
    }
    Node* flatten(Node* head) {
        if(head==nullptr){
            return head;
        }
        else{
            recursive(head);
        }
        return head;
    }
};
// @lc code=end

