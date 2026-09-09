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
    ListNode* collisionLL(ListNode* headA, ListNode* headB, int N1, int N2){
        if(N1>=N2){
            int diff = N1-N2;
            int count = 0;
            while(count!=diff){
                count++;
                headA = headA->next;
            }
            while(headA!=NULL){
                if(headA==headB){
                    return headB;
                }
                headA = headA ->next;
                headB = headB ->next;
            }
        }
        else{
            int diff = N2-N1;
            int count = 0;
            while(count!=diff){
                count++;
                headB = headB->next;
            }
            while(headA!=NULL){
                if(headA==headB){
                    return headB;
                }
                headA = headA ->next;
                headB = headB ->next;
            }
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int count1 = 0;
        int count2 = 0;
        while(temp1!=NULL){
            count1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            count2++;
            temp2=temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        if(count1 >= count2){
            return collisionLL(temp1,temp2,count1,count2);
        }
        else{
            return collisionLL(temp1,temp2, count1,count2);
        }
        return NULL;
    }
};