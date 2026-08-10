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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head || !head-> next) return head;

        int end = 0;
        ListNode * curr = head;
        while(curr) {
            end ++ ;
            curr = curr -> next;
        }
        end = end - k + 1;
        ListNode * tail = head;
        for(int i = 1; i < end; i ++){
            tail = tail -> next;
        }
        curr = head;
        for(int i = 1 ; i < k; i ++){
            curr = curr -> next;
        }
        int data = curr -> val;
        curr -> val =  tail-> val;
        tail -> val = data;
        return head;

    }
};