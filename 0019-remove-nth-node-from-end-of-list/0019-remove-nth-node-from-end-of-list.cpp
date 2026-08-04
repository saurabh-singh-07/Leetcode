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
        if(head == nullptr ) return head;
        
        ListNode * temp = head;

        int count = 1;
        while(temp-> next != nullptr){
            temp = temp -> next;
            count ++;
        }
        if(count < n) return head;
        if(count == n){
            ListNode * del = head;
            head = head -> next;
            delete del;
            return head;
        }
        count = count - n;
        temp = head;

        for(int i = 1; i < count; i ++){
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        return head;
    }
};