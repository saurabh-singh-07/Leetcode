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
    ListNode* removeNodes(ListNode* head) {
        if(!head || !head-> next)  return head;

        ListNode * curr = head;
        stack<ListNode *> st;

        while(curr != nullptr){
            while(!st.empty() && st.top()-> val < curr-> val) st.pop();

            st.push(curr);
            curr = curr -> next;
        }

        ListNode * prev_node = nullptr;
        while(!st.empty()){
            ListNode * node = st.top();
            st.pop();

            node -> next = prev_node;
            prev_node = node;
        }
        return prev_node;
    }
};