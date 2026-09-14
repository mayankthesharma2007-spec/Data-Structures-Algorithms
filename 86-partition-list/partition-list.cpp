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
        list <int> vs;
        int count = 0;
        while(temp!=NULL){
            if(temp->val>=x){
                vs.push_back(temp->val);
            }else{
                vs.push_front(temp->val);
                count++;
            }
            temp=temp->next;
        }
        std::reverse(vs.begin(), std::next(vs.begin(), count));
        temp = head;
        for(auto it = vs.begin();it!=vs.end();it++){
            temp->val = *(it);
            temp=temp->next;
        }
        return head;
    }
};