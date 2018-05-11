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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode * addLists(ListNode * l1, ListNode * l2) {
        // write your code here
        ListNode *p3,*head=NULL;
        int carry =0,sum;
        while(l1!=NULL && l2!=NULL)
        {
            sum = l1->val + l2->val + carry;
            if(head==NULL)
            {
                head = new ListNode(sum%10);
                p3=head;
            }
            else
            {
                p3->next=new ListNode(sum%10);
                p3=p3->next;
            }
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            sum = l1->val + carry;
            p3->next = new ListNode(sum%10);
            l1=l1->next;
            p3=p3->next;
            carry=sum/10;
        }
        while(l2!=NULL)
        {
            sum = l2->val + carry;
            p3->next = new ListNode(sum%10);
            l2=l2->next;
            p3=p3->next;
            carry=sum/10;
        }
        if(carry!=0)
        {
            p3->next = new ListNode(carry);
        }
        return head;
    }
};
