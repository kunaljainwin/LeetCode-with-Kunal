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
        //2 [pointer]
        ListNode* p1=head;
        ListNode* p2=head;
        while(p2!=NULL&&p2->next!=NULL){
            p1=p1->next;
            p2=p2->next->next;
        }
        return p1;
        
        
        
        // Naive 
        
        
        
//         int size=0;
//         ListNode*temp=head;
//         while(temp!=NULL){
//             temp=temp->next;
//             ++size;
//         }
//         temp=head;
//         size/=2;
//           while(size--){
//             temp=temp->next;

//         }
    
//         return temp;
    }
};