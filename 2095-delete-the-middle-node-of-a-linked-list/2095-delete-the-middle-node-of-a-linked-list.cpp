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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
   
        ListNode* temp=head;
        ListNode* res = head;
        
        if(head->next==NULL) return head->next;
        
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
      
      int mid=len/2;
        while(mid--){
            if(!mid){
                res->next=res->next->next;
            }
            else{
                res=res->next;
            }
        }
        return head;
    }
};