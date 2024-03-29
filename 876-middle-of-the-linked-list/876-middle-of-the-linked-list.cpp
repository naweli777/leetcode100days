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
        
        int size =0;
        ListNode* temp = head; 
        while(temp)
        {
            size++;
            temp = temp->next;
        }
        temp = head;
        for(int i = 0; i <size / 2 ; i++) {
        		temp = temp->next;
    	}
    	return temp;
        
        //OPTIMAL 
        
//         ListNode *slow= head, *fast=head;
        
//         while(fast && fast->next)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
            
//         }
//         return slow;
        
        
    }
};