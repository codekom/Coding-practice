/**
 * Definition of singly-linked-list:
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param head: head is the head of the linked list
     * @return: head of linked list
     */
    ListNode * deleteDuplicates(ListNode * head) {
        // write your code here
        ListNode *prev,*ptr;
        if(head!=NULL)
        {
            prev = head;
            ptr = prev->next;
            while(ptr!=NULL)
            {
                while(ptr->val == prev->val)
                {
                    prev->next = ptr->next;
                    ptr = ptr->next;
                    if(ptr==NULL)
                      break;
                }
                if(ptr==NULL)
                   break;
                prev = ptr;
                ptr = ptr->next;
            }
        }
        return head;
    }
};
