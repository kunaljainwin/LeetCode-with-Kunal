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
    int pairSum(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        stack<int>stk;
        int ans=INT_MIN;
        while(fast!=NULL){
            stk.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        while(slow!=NULL){
            ans=max(ans,stk.top()+slow->val);
            slow=slow->next;
            stk.pop();
        }
        return ans;
    }
};