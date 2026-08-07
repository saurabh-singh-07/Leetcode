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
        int largest = 0;
        ListNode * curr = head;
        while(curr){
            ListNode * temp = curr;
            largest = curr -> val;
            while(temp){
                if(largest < temp -> val){
                    largest = temp-> val;
                    break;
                }
                temp = temp -> next;
            }
            if(largest == curr -> val)
                ans.push_back(0);
            else
                ans.push_back(largest);
            
            curr = curr -> next;
        }
        return ans;
    }
};