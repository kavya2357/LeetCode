/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list3=new ListNode();
        ListNode *head=list3;
        vector <int> v1;
        vector <int> v2;
        while(list1){
            v1.push_back(list1->val);
            list1=list1->next;
        }
        while(list2){
            v2.push_back(list2->val);
            list2=list2->next;
        }
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            list3->next=new ListNode(v1[i]);
            list3=list3->next;
        }
        return head->next;
    }
};
// @lc code=end

