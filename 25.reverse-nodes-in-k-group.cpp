/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
 */

// @lc code=start
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
    ListNode* getkthnode(ListNode *temp,int k){
        k=k-1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    void reverse(ListNode *temp){
        ListNode *curr=temp,*prev=NULL;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        temp=prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head,*prevnode=NULL;
        
        while(temp!=NULL){
            ListNode *kthnode=getkthnode(temp,k);
            if(kthnode==NULL){
                if(prevnode){
                    prevnode->next=temp;
                }
                return head;
            }
            ListNode *nextnode=kthnode->next;
            kthnode->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kthnode;
            }else{
                prevnode->next=kthnode;
            }
            prevnode=temp;
            temp=nextnode;
        }
        return head;
    }
};
// @lc code=end

