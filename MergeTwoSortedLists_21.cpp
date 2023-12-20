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
        ListNode *dummy=new ListNode(0);
        ListNode *curr=dummy;
        int max;
        while(list1!=NULL || list2!=NULL)
        {
            int x=list1 ? list1->val : INT_MAX;
            int y=list2 ? list2->val : INT_MAX;
                if(x<y)
                {
                    curr->next=new ListNode(x);
                    curr=curr->next;
                    list1 = list1 ? list1->next : NULL;
                }
                else if(y<x)
                {
                    curr->next=new ListNode(y);
                    curr=curr->next;
                    list2 = list2 ? list2->next : NULL;
                }
                else
                {
                    curr->next=new ListNode(y);
                    curr=curr->next;
                    curr->next=new ListNode(x);
                    curr=curr->next;
                    list1 = list1 ? list1->next : NULL;
                    list2 = list2 ? list2->next : NULL;
                }
        }
        return dummy->next;
    }
};