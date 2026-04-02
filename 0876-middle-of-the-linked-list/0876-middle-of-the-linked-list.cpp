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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length = 0;
        while(temp!=nullptr){
            length++;
            temp = temp->next;
        }
        int middle = (length/2)+1;
        temp = head;
        while(temp!=nullptr){
            middle = middle-1;
            if(middle==0){
                break;
            }
            temp = temp->next;
        }
        return temp;
    }    
};