/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * prev = NULL;
        ListNode* temp = head;
        int len = 0;
		//check if next group size is less than k
        while(temp != NULL && len < k){
            temp = temp->next;
            len++;
        }
		//if len and k are not same that means we have reached the end of list and no need to process further
        if(len != k)
            return head;
        int reqLen = len/k;
        len = 0;
        int count = 0;
        ListNode* current = head;
        ListNode* next = NULL;
        while (current && count < k ) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;            
        }

        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }

        return prev;
    }


};