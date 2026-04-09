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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        unordered_map<ListNode*,int> map;
        while(temp1!=NULL){
            map[temp1] = 1;
            temp1 = temp1->next;
        }

        while(temp2!=NULL){
            if(map.find(temp2)!= map.end()) return temp2;
            temp2 = temp2->next;
        }
        return NULL;
    }
};