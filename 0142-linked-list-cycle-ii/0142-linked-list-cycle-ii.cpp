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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head-> next || !head ->next -> next) return nullptr;

        ListNode * node1 = head->next;
        ListNode * node2 = head->next->next;
        while(node1 != node2){
            if(node2 ->next == nullptr || node2-> next-> next == nullptr) return nullptr;
            node1 = node1 -> next;
            node2 = node2-> next -> next;
        }
        node1 = head;
        while(node1 != node2){
            node1 = node1 -> next;
            node2 = node2 -> next;
        }
        return node1;
    }
};