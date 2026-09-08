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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergeLL(ListNode* leftHead, ListNode* rightHead){
        ListNode* t1 = leftHead;
        ListNode* t2 = rightHead;
        ListNode* newNode = new ListNode(-1);
        ListNode* temp = newNode;
        while(t1!=NULL && t2!=NULL){
            if(t1->val >= t2->val){
                temp->next = t2;
                t2=t2->next;
                temp=temp->next;
            }
            else if(t1->val < t2->val){
                temp->next = t1;
                t1=t1->next;
                temp=temp->next;
            }
        }
        temp->next = (t1 != nullptr) ? t1 : t2;
        return newNode->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* middle = findMiddle(head);
        ListNode* leftHead = head;
        ListNode* rightHead = middle->next;
        middle->next=NULL;
        leftHead=sortList(leftHead);
        rightHead=sortList(rightHead);
        return mergeLL(leftHead,rightHead);
    }
};