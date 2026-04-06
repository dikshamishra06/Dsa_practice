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
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr) return true;
        ListNode* temp = head;
        stack<int> st;
        while(temp!= nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        ListNode* rev = new ListNode(st.top());
        ListNode* prev = rev;
        st.pop();
        temp= temp->next;
        while(temp != nullptr){
            ListNode* s = new ListNode(st.top());
            st.pop();
            temp = temp->next;
            prev->next = s;
            prev = prev->next;
        }
        temp = head;
        prev = rev;
        while(temp!=nullptr){
            if(temp->val != prev->val) return false;
            temp = temp->next;
            prev = prev->next;
        }
        return true;
    }
};