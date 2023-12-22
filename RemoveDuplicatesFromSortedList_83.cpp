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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ptr=head;
        ListNode *dummy=new ListNode(0);
        ListNode *temp=dummy;
       while(head!=nullptr)
       {
           int x=head->val;
           int y=temp ? temp->val :INT_MAX;
           
           if(x!=y)
           {
               temp->next=new ListNode(x);
               temp=temp->next;
           }
          head=head->next; 
        
       }
        if(ptr!=nullptr && ptr->val==0)
            return dummy;
        else
            return dummy->next;
    }
};