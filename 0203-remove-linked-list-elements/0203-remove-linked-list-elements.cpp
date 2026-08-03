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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * ans = new ListNode(0, head);
        ListNode * curr = ans;

        while(curr){
            while(curr-> next != nullptr && curr->next->val == val){
                ListNode * newNode = curr-> next;
                curr-> next= newNode -> next;
                delete newNode;
            }
            curr = curr-> next;
        }
        ListNode * result = ans -> next;
        delete ans;
        return result;
    }
};