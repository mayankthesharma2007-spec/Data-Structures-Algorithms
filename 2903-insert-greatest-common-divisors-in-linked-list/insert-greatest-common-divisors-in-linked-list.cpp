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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        while(temp->next!=NULL){
            ListNode* tester = new ListNode(gcd(temp->val,temp->next->val));
            tester->next = temp->next;
            temp->next = tester;
            temp = tester->next;
        }
        return head;
    }
};