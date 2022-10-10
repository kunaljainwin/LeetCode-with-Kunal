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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head,*xtemp=head;
    
        int sum=0;
        while(temp!=NULL){
            int x=temp->val;
            if(x==0){
                xtemp->val=sum;
                
            
                if(temp->next==NULL){
                    xtemp->next=NULL;
                }
                else{
                    xtemp=xtemp->next;
                }
                    sum=0;
                
            }
            sum+=x;
            temp=temp->next;
        }
        
        head=head->next;
        
        return head;
    }
};