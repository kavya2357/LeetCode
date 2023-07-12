/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        int ans;
        ListNode *temp=head;
        int nodes=0;
        while(temp){
            nodes++;
            temp=temp->next;
        }
        temp=head;
        int half=(nodes/2)+1;
        int count=0;
        while(temp){
            count++;
            if(count==half){
                ans=temp->val;
                break;
            }
            temp=temp->next;
        }
        return temp;
    }
};
// @lc code=end

