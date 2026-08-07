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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode * curr = head;
        stack<int> st;
        ListNode * prev = nullptr;

        while(curr){
            ListNode * nextNode = curr-> next;
            curr -> next = prev;
            prev = curr ;
            curr = nextNode;
        }

        ListNode * temp = prev;

        while(temp) {
            while(!st.empty() && st.top() <= temp -> val){
                st.pop();

            }
            if(st.empty()) ans.push_back(0);
            else ans.push_back(st.top());

            st.push(temp-> val);
            temp = temp -> next;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};