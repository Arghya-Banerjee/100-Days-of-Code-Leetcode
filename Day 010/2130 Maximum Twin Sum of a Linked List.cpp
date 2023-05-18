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
    int pairSum(ListNode* head) {
        int maxnum = 0;
        stack<int> st;
        ListNode *slow = head, *fast = head;
        while(fast != NULL){
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        while(slow != NULL){
            maxnum = max(slow->val + st.top(), maxnum);
            st.pop();
            slow = slow->next;
        }
        return maxnum;
    }
};