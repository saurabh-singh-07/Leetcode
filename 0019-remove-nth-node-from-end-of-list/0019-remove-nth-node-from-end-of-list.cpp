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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head == nullptr) return head;
        // int count = 1;
        // ListNode * curr = head; 
        // while(curr-> next) {
        //     curr = curr-> next;
        //     count ++;
        // }

        // if(n > count) return head;

        // if(n == count){
        //     ListNode * del = head;
        //     head = head-> next;
        //     delete  del;
        //     return head;
        // }

        // count = count - n;
        // curr = head;
        // for(int i = 1; i < count; i ++){
        //     curr = curr -> next;
        // }
        // curr -> next = curr-> next -> next;
        // return head;


        ListNode * ptr = head;
        ListNode * temp = head;

        for(int i = 0; i < n; i ++) ptr = ptr -> next;
        
        if(!ptr) return head-> next;
        while(ptr-> next){
            ptr= ptr-> next;
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        return head;
    }
};