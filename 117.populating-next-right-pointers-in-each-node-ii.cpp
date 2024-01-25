/*
 * @lc app=leetcode id=117 lang=cpp
 *
 * [117] Populating Next Right Pointers in Each Node II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node *head=root;

        while(head!=NULL){//for tree
            Node *dummy=new Node();
            Node *temp=dummy;
            while(head!=NULL){//for each level
                if(head->left!=NULL){
                    temp->next=head->left;//pointing dummy to left subtree
                    temp=temp->next;
                }
                if(head->right!=NULL){
                    temp->next=head->right;
                    temp=temp->next;
                }
                head=head->next;
            }
            head=dummy->next;
        }
        return root;
    }
};
// @lc code=end

