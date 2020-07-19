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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
         ListNode *a = l1;
         ListNode *b = l2;
         ListNode *c = new ListNode(-1);
         ListNode *pre = c;
         while(a != nullptr && b != nullptr)
         {
             if(a->val < b->val)
             {
                 c->next = a;
                 a = a->next;
             }
             else
             {
                 
                    c->next = b;
                     b = b->next;
             }
             c = c->next;
         }
          if(a == nullptr)
         {
               c->next = b;
             
         }
         else
         {
              c->next = a;
         }
     ListNode* head = pre->next;
     delete pre;
     return head;
    }
};