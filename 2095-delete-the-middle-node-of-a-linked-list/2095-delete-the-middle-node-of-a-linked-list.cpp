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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        ListNode* temp = head;
        int leng = 0;
        while(temp!=nullptr){
            leng++;
            temp = temp->next;
        }
        int mid = (leng/2) - 1;
        int idx = 0;
        temp = head;
        while(temp!=nullptr){
            //idx++;
            if(idx==mid) break;
            idx++;
            temp = temp->next;
        }
        ListNode* deletemid = temp->next;
        temp->next = temp->next->next;
        delete deletemid;
        return head;
    }
};