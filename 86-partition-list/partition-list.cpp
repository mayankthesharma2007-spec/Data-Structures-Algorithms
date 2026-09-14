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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* big = NULL;
        ListNode* small = NULL;
        ListNode* first_big = NULL;
        ListNode* first_small = NULL;
        while(temp!=NULL){
            if(temp==head){
                if(temp->val>=x){
                    big = head;
                    first_big = big;
                }
                else{
                    small = head;
                    first_small = small;
                }
            }
            else{
                if(temp->val>=x){
                    if(big!=NULL){
                        big->next = temp;
                        big = big->next;
                    }
                    else{
                        big = temp;
                        first_big = big;
                    }
                }
                else{
                    if(small!=NULL){
                        small->next = temp;
                        small = small->next;
                    }
                    else{
                        small = temp;
                        first_small = small;
                    }
                }
            }
            temp=temp->next;
        }
        if(big){
            big->next = NULL;
        }
        if(small){small->next = first_big;}
        else{return first_big;}
        return first_small;
    }
};