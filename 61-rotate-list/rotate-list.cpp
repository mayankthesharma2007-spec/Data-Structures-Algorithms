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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        count++;
        k=k%count;
        if(!k){
            return head;
        }
        temp->next = head;
        k = count - k;
        temp = head;
        while(k!=1){
            k--;
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};